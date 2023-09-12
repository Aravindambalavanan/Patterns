#include <iostream>
using namespace std;
void rightHalfPyramid(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void rightHalfPyramidNumber(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}

void rightHalfPyramidAlphabet(int n) {
  for (int i = 0; i < n; i++) {
    char c = 'A';
    for (int j = 0; j <= i; j++) {
      cout << c << " ";
      c++;
    }
    cout << endl;
  }
}

void leftHalfPyramid(int n) {
  for (int i = 0; i < n; i++) {
    for (int k = n - i; k > 0; k--) {
      cout << "  ";
    }
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void leftHalfPyramidNumber(int n) {
  for (int i = 0; i < n; i++) {
    for (int k = n - i; k > 0; k--) {
      cout << "  ";
    }
    for (int j = 0; j <= i; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}

void leftHalfPyramidAlphabet(int n) {
  for (int i = 0; i < n; i++) {
    char c = 'A';
    for (int k = n - i; k > 0; k--) {
      cout << "  ";
    }
    for (int j = 0; j <= i; j++) {
      cout << c << " ";
      c++;
    }
    cout << endl;
  }
}

void fullPyramid(int n) {
  for (int i = 0; i < n; i++) {
    for (int k = n - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void fullPyramidNumber(int n) {
  for (int i = 0; i < n; i++) {
    for (int k = n - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 0; j <= i; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}

void fullPyramidAlphabet(int n) {
  for (int i = 0; i < n; i++) {
    char c = 'A';
    for (int k = n - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 0; j <= i; j++) {
      cout << c << " ";
      c++;
    }
    cout << endl;
  }
}

void invertedRightHalfPyramid(int n) {
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void invertedRightHalfPyramidNumber(int n) {
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}

void invertedRightHalfPyramidAlphabet(int n) {
  for (int i = 0; i <= n; i++) {
    char c = 'A';
    for (int j = 0; j < n - i; j++) {
      cout << c++ << " ";
    }
    cout << endl;
  }
}

void invertedLeftHalfPyramid(int n) {
  for (int i = n; i > 0; i--) {
    for (int k = 0; k < n - i; k++) {
      cout << "  ";
    }
    for (int j = 0; j < i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void invertedLeftHalfPyramidNumber(int n) {
  for (int i = n; i > 0; i--) {
    for (int k = 0; k < n - i; k++) {
      cout << "  ";
    }
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void invertedLeftHalfPyramidAlphabet(int n) {
  for (int i = n; i > 0; i--) {
    char c = 'A';
    for (int k = 0; k < n - i; k++) {
      cout << "  ";
    }
    for (int j = 0; j < i; j++) {
      cout << c++ << " ";
    }
    cout << endl;
  }
}

void invertedFullPyramid(int n) {
  for (int i = n; i > 0; i--) {
    for (int k = n - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void invertedFullPyramidNumber(int n) {
  for (int i = n; i > 0; i--) {
    for (int k = n - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}

void invertedFullPyramidAlphabet(int n) {
  for (int i = n; i > 0; i--) {
    char c = 'A';
    for (int k = n - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << c++ << " ";
    }
    cout << endl;
  }
}

void diamondPattern(int n) {
  for (int i = 1; i <= n; i++) {
    for (int k = n - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = n - 1; i > 0; i--) {
    for (int k = n - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void diamondPatternNumber(int n) {
  for (int i = 1; i <= n; i++) {
    for (int k = n - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
  for (int i = n - 1; i > 0; i--) {
    for (int k = n - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}

void diamondPatternAlphabet(int n) {
  for (int i = 1; i <= n; i++) {
    char c = 'A';
    for (int k = n - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << c++ << " ";
    }
    cout << endl;
  }
  for (int i = n - 1; i > 0; i--) {
    char c = 'A';
    for (int k = n - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 0; j < i; j++) {
      cout << c++ << " ";
    }
    cout << endl;
  }
}

void hollowSquarePattern(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl;
  }
}

void hollowSquarePatternNumber(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
        cout << j + 1 << " ";
      else
        cout << "  ";
    }
    cout << endl;
  }
}

void hollowSquarePatternAlphabet(int n) {
  for (int i = 0; i < n; i++) {
    char c = 'A';
    for (int j = 0; j < n; j++) {
      if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
        cout << c << " ";
      else
        cout << "  ";
      c++;
    }
    cout << endl;
  }
}

void floydsTriangleNumber(int n) {
  int x = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << x++ << " ";
    }
    cout << endl;
  }
}

void floydsTriangleAlphabet(int n) {
  char c = 'A';
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << c++ << " ";
    }
    cout << endl;
  }
}

int main() {
  int choice, size;
  do {
    cout << "Choose a pattern to print:" << endl;
    cout << "1. Right Half Pyramid" << endl;
    cout << "2. Right Half Pyramid with Numbers" << endl;
    cout << "3. Right Half Pyramid with Alphabets" << endl;
    cout << "4. Left Half Pyramid" << endl;
    cout << "5. Left Half Pyramid with Numbers" << endl;
    cout << "6. Left Half Pyramid with Alphabets" << endl;
    cout << "7. Full Pyramid" << endl;
    cout << "8. Full Pyramid with Numbers" << endl;
    cout << "9. Full Pyramid with Alphabets" << endl;
    cout << "10. Inverted Right Half Pyramid" << endl;
    cout << "11. Inverted Right Half Pyramid with Numbers" << endl;
    cout << "12. Inverted Right Half Pyramid with Alphabets" << endl;
    cout << "13. Inverted Left Half Pyramid" << endl;
    cout << "14. Inverted Left Half Pyramid with Numbers" << endl;
    cout << "15. Inverted Left Half Pyramid with Alphabets" << endl;
    cout << "16. Inverted Full Pyramid" << endl;
    cout << "17. Inverted Full Pyramid with Numbers" << endl;
    cout << "18. Inverted Full Pyramid with Alphabets" << endl;
    cout << "19. Diamond Pattern" << endl;
    cout << "20. Diamond Pattern with Numbers" << endl;
    cout << "21. Diamond Pattern with Alphabets" << endl;
    cout << "22. Hollow Square Pattern" << endl;
    cout << "23. Hollow Square Pattern with Numbers" << endl;
    cout << "24. Hollow Square Pattern with Alphabets" << endl;
    cout << "25. Floyd's Triangle with Numbers" << endl;
    cout << "26. Floyd's Triangle with Alphabets" << endl;
    cout << "27. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter the size: ";
    cin >> size;
    switch (choice) {
      case 1:
        system("clear");
        rightHalfPyramid(size);
        break;
      case 2:
        system("clear");
        rightHalfPyramidNumber(size);
        break;
      case 3:
        system("clear");
        rightHalfPyramidAlphabet(size);
        break;
      case 4:
        system("clear");
        leftHalfPyramid(size);
        break;
      case 5:
        system("clear");
        leftHalfPyramidNumber(size);
        break;
      case 6:
        system("clear");
        leftHalfPyramidAlphabet(size);
        break;
      case 7:
        system("clear");
        fullPyramid(size);
        break;
      case 8:
        system("clear");
        fullPyramidNumber(size);
        break;
      case 9:
        system("clear");
        fullPyramidAlphabet(size);
        break;
      case 10:
        system("clear");
        invertedRightHalfPyramid(size);
        break;
      case 11:
        system("clear");
        invertedRightHalfPyramidNumber(size);
        break;
      case 12:
        system("clear");
        invertedRightHalfPyramidAlphabet(size);
        break;
      case 13:
        system("clear");
        invertedLeftHalfPyramid(size);
        break;
      case 14:
        system("clear");
        invertedLeftHalfPyramidNumber(size);
        break;
      case 15:
        system("clear");
        invertedLeftHalfPyramidAlphabet(size);
        break;
      case 16:
        system("clear");
        invertedFullPyramid(size);
        break;
      case 17:
        system("clear");
        invertedFullPyramidNumber(size);
        break;
      case 18:
        system("clear");
        invertedFullPyramidAlphabet(size);
        break;
      case 19:
        system("clear");
        diamondPattern(size);
        break;
      case 20:
        system("clear");
        diamondPatternNumber(size);
        break;
      case 21:
        system("clear");
        diamondPatternAlphabet(size);
        break;
      case 22:
        system("clear");
        hollowSquarePattern(size);
        break;
      case 23:
        system("clear");
        hollowSquarePatternNumber(size);
        break;
      case 24:
        system("clear");
        hollowSquarePatternAlphabet(size);
        break;
      case 25:
        system("clear");
        floydsTriangleNumber(size);
        break;
      case 26:
        system("clear");
        floydsTriangleAlphabet(size);
        break;
      case 27:
        system("clear");
        cout << "Exiting the program." << endl;
        break;
      default:
        return 0;
    }
    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();
  } while (choice != 27);
  return 0;
}