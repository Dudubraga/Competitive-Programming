# refactor_repo.py
import os
import re

def find_code_file(directory):
    """Finds the first supported code file in a directory."""
    supported_extensions = ['.cpp', '.java', '.py', '.c']
    for filename in os.listdir(directory):
        for ext in supported_extensions:
            if filename.endswith(ext):
                return os.path.join(directory, filename)
    return None

def extract_url_from_md(md_file_path):
    """Extracts a URL from a markdown link format."""
    try:
        with open(md_file_path, 'r', encoding='utf-8') as f:
            content = f.read()
            # Regex to find a markdown link and extract the URL
            match = re.search(r'\[.*?\]\((.*?)\)', content)
            if match:
                return match.group(1)
    except FileNotFoundError:
        print(f"  - Warning: LINK.md not found in {os.path.dirname(md_file_path)}")
    except Exception as e:
        print(f"  - Error reading {md_file_path}: {e}")
    return None

def refactor_repository(root_dir):
    """
    Walks through the repository, reads the URL from LINK.md,
    prepends it to the code file, and deletes LINK.md.
    """
    print(f"Starting refactoring in '{root_dir}'...")
    for dirpath, dirnames, filenames in os.walk(root_dir):
        # We only care about directories that contain a LINK.md
        if 'LINK.md' in filenames:
            print(f"\nProcessing folder: {dirpath}")
            
            md_path = os.path.join(dirpath, 'LINK.md')
            code_file_path = find_code_file(dirpath)
            
            if not code_file_path:
                print("  - Warning: No code file found. Skipping.")
                continue

            url = extract_url_from_md(md_path)
            if not url:
                print("  - Warning: Could not extract URL. Skipping.")
                continue

            try:
                # Read original code
                with open(code_file_path, 'r', encoding='utf-8') as f:
                    original_code = f.read()
                
                # Prepend the comment
                comment = f"/* Problem statement: {url} */\n"
                new_code = comment + original_code

                # Write the new content back to the code file
                with open(code_file_path, 'w', encoding='utf-8') as f:
                    f.write(new_code)
                
                print(f"  - Success: Added URL to {os.path.basename(code_file_path)}")

                # Remove the now-redundant LINK.md file
                os.remove(md_path)
                print(f"  - Success: Removed {os.path.basename(md_path)}")

            except Exception as e:
                print(f"  - Error processing {code_file_path}: {e}")
    
    print("\nRefactoring complete!")

if __name__ == "__main__":
    # Assumes the script is in the root of the competitive-programming repo
    repo_path = os.getcwd() 
    refactor_repository(repo_path)
