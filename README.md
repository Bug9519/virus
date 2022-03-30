# Virus - A pretend Windows Virus.

This is just a **_pretend_** virus for Microsoft Windows machines, it doesn't actually do anything malicious at all.

This project is licensed under the terms of the **GNU General Public License v3.0**

List of actions that it does.
- Copies itself to the following folders, belonging to the currently logged in user.
  - Desktop
  - Documents
  - Downloads
  - Music
  - Pictures
  - Videos

- Attempts to copy itself to the Windows folder, will only work if it's run as Administrator.
- Runs the "help" command, and pipes the output to a text file called "help.txt".
- Erases the file "help.txt" from the current directory, to simulate destructive actions.
- Exits, after pretending to be complete.

## Why
I coded this because I was bored, and wanted a way to test out AV software, without using actual malware or the [EICAR Anti Malware Testfile](https://www.eicar.org/?page_id=3950), which is still a good file to use to test AV, I just wanted something different...

Some of the actions would get this "virus" picked up by AV heuristics (I think that's the correct term), like how some AV's look for file deletion, file copying, etc.

## Disclaimer
Even though this "virus" doesn't actually do anything, in the one-in-a-bazillion chance that it wrecks your computer, I can't be held responsible for such damage.
I also can not be held responsible for your actions, if you use this to trick your friends/enemies/siblings/coworkers/etc, and they end up hitting you or something... that's on you.

That said, have fun, don't create real viruses/virii, and don't be a d**k in general.
