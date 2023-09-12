public class Pattern {
    static void rightHalfPyramid() {
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    static void rightHalfPyramidNumbers() {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(j + 1 + " ");
            }
            System.out.println();
        }
    }

    static void rightHalfPyramidAlphabets() {

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.printf("%c " + " ", 'A' + j);
            }
            System.out.println();
        }
    }

    static void floydsTriangle() {
        int n = 1;
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.printf("%d ", n++);
            }
            System.out.println();
        }
    }

    static void floydsTriangleAlphabets() {
        char n = 'A';
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.printf("%c ", n++);
            }
            System.out.println();
        }
    }

    static void fullPyramid() {
        int n = 5;
        for (int i = 1; i <= 5; i++) {
            for (int k = 1; k <= (n - i); k++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    static void fullPyramidNumbers() {
        int n = 5;
        for (int i = 0; i < 5; i++) {
            for (int k = 0; k < (n - i); k++) {
                System.out.print(" ");
            }
            for (int j = 0; j <= i; j++) {
                System.out.print(j + 1 + " ");
            }
            System.out.println();
        }
    }

    static void hollowSquarePattern() {
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= 5; j++) {
                if (i == 1 || i == 5 || j == 1 || j == 5) {
                    System.out.print("* ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }

    static void hollowSquarePatternNumbers() {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (i == 0 || i == 4 || j == 0 || j == 4) {
                    System.out.print(j + 1 + " ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }

    static void hollowSquarePatternAlphabets() {

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (i == 0 || i == 4 || j == 0 || j == 4) {
                    System.out.printf("%c" + " ", 'A' + j);
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }

    static void leftHalfPyramid() {
        int n = 5;
        for (int i = 1; i <= 5; i++) {
            for (int k = 1; k <= (n - i); k++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    static void leftHalfPyramidNumbers() {
        int n = 5;
        for (int i = 0; i < 5; i++) {
            for (int k = 0; k < (n - i); k++) {
                System.out.print(" ");
            }
            for (int j = 0; j <= i; j++) {
                System.out.printf("%d" + " ", j + 1);
            }
            System.out.println();
        }
    }

    static void leftHalfPyramidAlphabets() {
        int n = 5;

        for (int i = 0; i < 5; i++) {
            for (int k = 0; k < (n - i); k++) {
                System.out.print(" ");
            }
            for (int j = 0; j <= i; j++) {
                System.out.printf("%c" + " ", 'A' + j);
            }
            System.out.println();
        }
    }

    static void invertedRightHalfPyramid() {
        int n = 5;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < (n - i); j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    static void invertedRightHalfPyramidNumbers() {
        int n = 5;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < (n - i); j++) {
                System.out.print(j + 1 + " ");
            }
            System.out.println();
        }
    }

    static void invertedRightHalfPyramidAlphabets() {
        int n = 5;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < (n - i); j++) {
                System.out.printf("%c" + " ", 'A' + j);
            }
            System.out.println();
        }
    }

}