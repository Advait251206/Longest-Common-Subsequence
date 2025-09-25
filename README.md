# Practical 5 – Design and Analysis of Algorithms  

Hi, I’m **Advait Kawale (A4-B3, Roll No. 42)** and this repository contains my **Practical 5 submission** for the course **Design and Analysis of Algorithms (DAA)**.  

## 📌 Problem Statement  
Implement a **dynamic algorithm for Longest Common Subsequence (LCS)** to:  
1. Find the similarity between two DNA sequences.  
2. Find the **Longest Repeating Subsequence (LRS)** within a string.  
3. Solve the **LeetCode problem 1143 – Longest Common Subsequence**.  

---

## 🖥️ My Implementation  

### 🔹 Task 1: Longest Common Subsequence (DNA Sequences)  
- Compares two given DNA sequences.  
- Uses **dynamic programming** to compute LCS length and sequence.  
- Example:  
- X = AGCCCTAAGGGCTACCTAGCTT
- Y = GACAGCCTACAAGCGTTAGCTTG
- Output → Length of LCS and the subsequence.

---

### 🔹 Task 2: Longest Repeating Subsequence (LRS)  
- Variation of LCS where the string is compared with itself.  
- Ensures indices `i != j` to avoid trivial matches.  
- Example:
- Input → AABCBDC
- Output → LRS = ABC or ABD

---

### 🔹 Task 3: LeetCode 1143 (LCS)  
- Implements the standard **LCS dynamic programming solution**.  
- Returns the length of the longest common subsequence between two given strings.  

---

## ✅ Example Outputs  

- **DNA Sequences:** Prints the LCS and its length.  
- **Repeating Subsequence:** Prints the longest repeating subsequence in a given string.  
- **LeetCode Problem:** Returns integer length of LCS.
