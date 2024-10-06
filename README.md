# 351-five: Do the Forky-Thready thing in Assignment 5

- Create processes

- Wait for them

- Output messages to a text file.

   - Commit the text file here as "results.txt"

- Professional!

# Spec

Each process should output (say) “Process 3 beginning”, then sleep for a random number of seconds (say, 1-8). If it created processes, it should output a message "Process 3 creating Process 4", then wait for them to complete, then output “Process 3 exiting”. It is optional (but desired) that you include the PID in this output ("Process 2 (5232) started Process 3 (5237)").

In pattern 1, it is desired that you fork ALL processes before you start waiting for them. In other words, multiple processes will be executed at "the same" time. However, you can start with "fork one, wait one" as a first version.

Capture several runs of terminal output and CHECK IT IN as "results.txt".

Extra Credit: 50 points for implementing Pattern 3.

