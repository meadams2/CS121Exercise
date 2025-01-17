# CS121 Exercise: Number Guesser Game

## Key Components

- Ask user's name and store in string
- Generate random number between 1 and 100
- Give user feedback (too high, too low, correct)
- Stop when user gets answer correct
- Keep track of turns
- Max 7 turns

## Algorithm

```
Include I/O
 
Ask user's name. Assign to Char[20].
```

Generate the random number between 1 and 100 (ask Andy?)

Ask for user to guess. Store in int and call Guess. 

Start while loop with keepGoing sentry. Set TRUE and FALSE values (-1 and 0respectively). 

```
keepGoing = TRUE
turns = 0

while keepGoing:
	If user guess and random number are the same:
		print("You're so smart")
		keepGoing = FALSE
	Otherwise:
		turns = +1
		if user guess is less than random number:
			print("Too Low")
		if user guess is more than random number:
			print("Too high")
	If turns >= 7:
		keepGoing = FALSE
```

## Testing

- Test on I/O 
- Test on random
- Test on turns first.
- Test on T/F values.

