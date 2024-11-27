# Matchsticks Game Strategy

In this game, two players, A and B, take turns picking between 1 to 4 matchsticks from a pile. The player who picks the last matchstick wins the game. Player A always goes first. The task is to determine the optimal number of matchsticks that A should pick on their first turn to guarantee a win or return -1 if it’s impossible for A to win.

### Problem Breakdown

- **Loss Condition**: 
  - If there are 5 matchsticks left at the start of a player’s turn, they are in a losing position because no matter how many matchsticks they take (1 to 4), the opponent can always take the remaining matchsticks and win.
  - The key insight is that if the number of matchsticks (n) is a multiple of 5 (i.e., `n % 5 == 0`), then player A is guaranteed to lose if both players play optimally.

- **Winning Strategy**:
  - If `n % 5 != 0`, player A can ensure a win by making sure the remaining matchsticks after their move result in a number that is a multiple of 5 for player B's turn.
  - A will always aim to leave the opponent with a multiple of 5 matchsticks by taking `n % 5` matchsticks on their first turn.

### Approach

1. **Input**: The number of matchsticks, `n`.
2. **Logic**:
   - If `n % 5 == 0`, player A cannot guarantee a win, and the function returns -1.
   - Otherwise, player A should pick `n % 5` matchsticks on their first turn to force the opponent into a losing position.

### Example

For `n = 17` matchsticks:

- `17 % 5 = 2`, so player A should take 2 matchsticks. After this, 15 matchsticks remain, which is a multiple of 5, putting player B in a losing position.

**Expected Output**:

```
Enter matchsticks: 17
For A: 2
```

### Challenges

The main challenge in implementing this game was determining the strategy for player A. The condition that a player loses when the remaining matchsticks are a multiple of 5 required careful thought on how to always force the opponent into such a situation. Additionally, edge cases like when the number of matchsticks is already a multiple of 5 were tricky, and handling them efficiently was key to the solution. 

![alt text](image.png)