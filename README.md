# 🧬 Longest Common Subsequence (LCS) & Variations

### *Practical 5 – Design and Analysis of Algorithms (DAA)*

---

<div align="center">
  <img src="https://img.shields.io/badge/Course-Design_&_Analysis_of_Algorithms-blue?style=for-the-badge&logo=gitbook" alt="DAA Badge" />
  <img src="https://img.shields.io/badge/Algorithm-Dynamic_Programming-9C27B0?style=for-the-badge" alt="DP Badge" />
  <img src="https://img.shields.io/badge/Language-C_Programming-00599C?style=for-the-badge&logo=c" alt="C Badge" />
</div>

---

## 🎓 Academic Credentials

* **Student Name:** Advait Kawale
* **Section:** A4 (B3)
* **Roll No:** 42
* **Course Name:** Design and Analysis of Algorithms
* **Course Code:** `24CS01TH0201`
* **Department:** Department of Computer Science & Engineering

---

## 🎯 Practical Objective

To construct and implement highly optimized **Dynamic Programming (DP)** solutions to solve the classic **Longest Common Subsequence (LCS)** problem and its variations. This submission addresses three major tasks:
1. 🧬 **LCS DNA Sequence Comparison:** Compute sequence similarity and reconstruct the LCS string.
2. 🔄 **Longest Repeating Subsequence (LRS):** Find repeating subpatterns inside a sequence without matching identical indices.
3. 🏆 **LeetCode 1143 Alignment:** Build a space-efficient C solution aligning with competitive programming specifications.

---

## 🎨 Dynamic Programming Logic & State Transition

The Longest Common Subsequence is solved using a bottom-up 2D grid matrix `dp[i][j]` representing the length of the LCS between prefix `text1[0...i-1]` and `text2[0...j-1]`.

### **Mathematical State Formulation**

$$\text{dp}[i][j] = \begin{cases} 
0 & \text{if } i = 0 \text{ or } j = 0 \\
\text{dp}[i-1][j-1] + 1 & \text{if } \text{text1}[i-1] = \text{text2}[j-1] \\
\max(\text{dp}[i-1][j], \text{dp}[i][j-1]) & \text{if } \text{text1}[i-1] \neq \text{text2}[j-1]
\end{cases}$$

### **Decision Tree Flowchart**

```mermaid
%%{init: {'theme': 'base', 'themeVariables': { 'primaryColor': '#E8F5E9', 'edgeLabelBackground':'#FFFFFF', 'tertiaryColor': '#FFF8E1', 'lineColor': '#2E7D32', 'nodeBorder': '#2E7D32' }}}%%
flowchart TD
    classDef match fill:#E8F5E9,stroke:#2E7D32,stroke-width:2px,color:#1B5E20;
    classDef mismatch fill:#FFF3E0,stroke:#E65100,stroke-width:2px,color:#E65100;
    classDef base fill:#E3F2FD,stroke:#1565C0,stroke-width:2px,color:#0D47A1;
    classDef formula fill:#EDE7F6,stroke:#6A1B9A,stroke-width:2px,color:#4A148C;

    A[🔍 Check characters at text1[i-1] and text2[j-1]] --> B{Is text1[i-1] == text2[j-1] ?}
    
    B -->|✅ Match| C[Diagonal Transition]
    C --> D["dp[i][j] = dp[i-1][j-1] + 1"]:::match
    
    B -->|❌ Mismatch| E[Maximum Adjacent Neighbours]
    E --> F["dp[i][j] = max(dp[i-1][j], dp[i][j-1])"]:::mismatch

    D --> G[🏁 Final Answer at dp[m][n]]
    F --> G

    class A,B formula;
    class G base;
```

---

## 📦 Core Code Modules

### 1. 🧬 DNA Matching Algorithm (`LongestCommonSubsequence.c`)
* **Problem Scope:** Evaluates genetic sequences to detect mutation footprints and matching segments.
* **Mechanism:** Fills a bottom-up DP table `c[m][n]` and retains backtrack indicators `b[m][n]` ('d' for diagonal, 'u' for up, 'l' for left) to recursively rebuild the actual string pattern.
* **Example Sequences:**
  * **X:** `AGCCCTAAGGGCTACCTAGCTT` (22 bases)
  * **Y:** `GACAGCCTACAAGCGTTAGCTTG` (23 bases)

### 2. 🔄 Longest Repeating Subsequence (`LongestRepeatingSubsequence.c`)
* **Problem Scope:** Standard variation where we seek the longest repeating sequence within a single string such that the repeating characters do not occupy the same original index.
* **Mechanism:** Modified LCS comparing string `X` with itself, with an added conditional rule:
  $$\text{match if } X[i-1] = X[j-1] \text{ AND } i \neq j$$
* **Example Input:** `AABCBDC` $\rightarrow$ **LRS Output:** `ABC` or `ABD`

### 3. 🏆 LeetCode 1143 Integration (`Leetcode_1166.c`)
* **Problem Scope:** Pure optimized competitive C implementation avoiding recursion overhead.
* **Key Features:** Custom fast pointer-based string length utility (`strlen_custom`) and efficient execution scaling.

---

## 🛠️ Compilation & Local Run

Compile and run the code modules on any standard POSIX shell or command prompt via `gcc`:

### **1. Standard LCS Run**
```bash
gcc LongestCommonSubsequence.c -o lcs
./lcs
```

### **2. Longest Repeating Subsequence Run**
```bash
gcc LongestRepeatingSubsequence.c -o lrs
./lrs
```

---

## 📁 Repository Structure

```
├── .gitignore                    # Standardized C compiler output & debug file exclusion rules
├── README.md                     # Academically designed DAA Practical 5 documentation
├── A4_B3_42_DAA_Practical_5.pdf  # Signed, verified laboratory practical report sheet
├── LongestCommonSubsequence.c    # DNA Sequence bottom-up match & backtracking algorithm
├── LongestRepeatingSubsequence.c # Longest repeating subpattern algorithm
└── Leetcode_1166.c               # LeetCode 1143 optimized competitive solution
```
