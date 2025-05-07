#  Frama-C Program Verification

## Samuel Correa Velasquez

---

## Environment and Tools Used

-   **Operating System:** Ubuntu 24.04.2 LTS (via WSL on Windows 11)
-   **C Compiler:** GCC 13.3.0
-   **Frama-C:** 30.0 (Zinc)
-   **Frama-C Plugins:** -wp, -rte

---

## Detailed instructions for running the solution

To verify the ACSL contract for Exercise 5 using Frama-C, follow these steps:

1.  **download the C Code:**
    - Save the C code with the ACSL annotations to a file named Exercise5.c.

2.  **Run Frama-C for Verification:**
    * Open your terminal or WSL terminal.
    * Navigate to the directory containing Exercise5.c.
    * If you want to run frama-c in the terminal, run the following command:
      
      frama-c -wp -rte Exercise5.c
      
    * or if you prefer frama-c with interface run:
  
      frama-c-gui -wp-rte Exercise5.c

    * Frama-C will analyze the code and attempt to prove the ACSL contract.  The results will be displayed in the terminal.

    * if everything is working properly, you should get messages like this if you used the terminal:

       [kernel] Parsing Exercise5.c (with preprocessing)  
       [rte:annot] annotating function step  
       [wp] 9 goals scheduled  
       [wp] [Cache] found:4  
       [wp] Proved goals:   11 / 11  
       Terminating:       1  
       Unreachable:       1  
       Qed:               5 (1ms-0.80ms-3ms)  
       Alt-Ergo 2.6.1:    4 (19ms-30ms)  

---
## References

1. **PDF**
   -  Theory of Computation Assignment 3  (https://drive.google.com/file/d/1Xj7bD8Zs8WuZygjcIqEDOp-uqvo7l9Ed/view)
   -  frama-c wp tutorial (https://allan-blanchard.fr/publis/frama-c-wp-tutorial-en.pdf)
2. **AI Tools:**
   - ChatGPT and DeepSeek for code organization, frama-c operation and documentation guidance.

