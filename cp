cp:

Usage:
Copy one or more file(s)/folder(s) to another location.

Syntax:
cp [-Options] <source(s)> <target>

Options:
-R	  Recursive - Copy the folder and eventual files and subtrees inside this folder
-H	  Symbolic links on the command line are followed.
-L	  The files and folders located in a symbolic link's destination is also copied.
-P	  No files and folders from symbolic links are copied (This is the default action unless you say otherwise).
-f	  Overwrite every file or folder that already exists.
-i	  Confirm every action that will overwrite a current file or folder
-n	  Don't overwrite existing files.
-p	  Preserve attributes on the file(s)/folder(s) that you're copying (modification time, access time, file flags, file mode etc.)

Examples:

cp old.txt new.txt	                    Copies the file old.txt in the current working directory to new.txt 
                                        (new.txt will end up in the same directory).

cp  old.txt ~/Documents	                Copies the file old.txt in the current working directory to the folder 
                                        ~/Documents.

cp *.jpg ~/Documents	                  Copies all jpg images in the current working directory to ~/Documents.

cp  -R Documents "Documents backup"	    Copies the folder Documents and all of it's content to the directory 
                                        named Documents backup.
