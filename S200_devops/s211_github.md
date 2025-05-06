<p style="text-align: right"> 
    <a href="./README.md">[INDEX]</a>
</p>

# GitHub & VSCode 연동
<div align="right">
<span style="color:#808080; background-color:#fff5b1">&lt;&nbsp; final update in 2025.04.25 &nbsp;&gt;</span>
</div>

- GitHub 설치
- VSCode의 Extension 설치


---

### 1. **Git 설치 확인**
- Windows에서 Git이 설치되어 있는지 확인합니다.
- 터미널에서 다음 명령어를 실행:
  ```bash
  git --version
  ```
  Git이 설치되어 있지 않다면 [Git 공식 웹사이트](https://git-scm.com/)에서 다운로드하여 설치하세요.

---

### 2. **GitHub 저장소 생성**
1. GitHub 웹사이트에 로그인합니다.
2. 새 저장소를 생성합니다:
   - 저장소 이름을 입력하고, "Create repository" 버튼을 클릭합니다.

---

### 3. **VS Code에서 GitHub 연결**
1. **Git 초기화**:
   - VS Code에서 터미널을 열고(`Ctrl + ~`), 프로젝트 폴더로 이동합니다:
     ```bash
     cd c:\GitHub\D2501_Notes
     ```
   - Git 저장소를 초기화합니다:
     ```bash
     git init
     ```

2. **GitHub 원격 저장소 추가**:
   - GitHub에서 생성한 저장소 URL을 복사합니다.
   - 터미널에서 다음 명령어를 실행:
     ```bash
     git remote add origin <GitHub 저장소 URL>
     ```

3. **변경 사항 커밋 및 푸시**:
   - 변경 사항을 추가하고 커밋합니다:
     ```bash
     git add .
     git commit -m "Initial commit"
     ```
   - GitHub에 푸시합니다:
     ```bash
     git push -u origin main
     ```

---

### 4. **GitHub 인증**
- VS Code에서 GitHub 계정을 인증하려면:
  1. `Ctrl + Shift + P`를 눌러 명령 팔레트를 엽니다.
  2. `GitHub: Sign In`을 검색하고 실행합니다.
  3. 브라우저가 열리면 GitHub 계정으로 로그인합니다.

---

### 5. **GitHub 확장 설치 (선택 사항)**
- VS Code의 확장 마켓플레이스에서 "GitHub Pull Requests and Issues" 확장을 설치하면 풀 리퀘스트 및 이슈 관리를 쉽게 할 수 있습니다.

---
---
---
JaceKim-TheAL: 개발자들이 vscode에서 github 연동하는 방법을 자세히 알려줘

GitHub Copilot: VS Code에서 GitHub를 연동하는 방법은 다음과 같습니다:

### 1. Git 설치
- 먼저, Git이 설치되어 있어야 합니다. [Git 공식 웹사이트](https://git-scm.com/)에서 다운로드하고 설치하세요.
- 설치 후, 터미널에서 `git --version` 명령어를 실행하여 설치가 제대로 되었는지 확인합니다.

### 2. VS Code에서 Git 확장 활성화
- VS Code는 기본적으로 Git을 지원합니다. 왼쪽 사이드바에서 **소스 제어** 아이콘(또는 Ctrl+Shift+G)을 클릭하여 Git 인터페이스를 확인할 수 있습니다.

### 3. GitHub 계정 연결
1. **GitHub 확장 설치**:
   - VS Code의 확장 마켓플레이스에서 "GitHub Pull Requests and Issues" 확장을 검색하고 설치합니다.
2. **GitHub 인증**:
   - VS Code에서 Ctrl+Shift+P를 눌러 명령 팔레트를 열고, `GitHub: Sign In`을 검색하여 실행합니다.
   - 브라우저가 열리며 GitHub 계정으로 로그인하라는 메시지가 표시됩니다. 로그인 후 VS Code와 계정이 연결됩니다.

### 4. 로컬 저장소와 GitHub 연동
1. **Git 초기화**:
   - 터미널에서 프로젝트 폴더로 이동한 후 `git init` 명령어를 실행하여 Git 저장소를 초기화합니다.
2. **GitHub에 새 저장소 생성**:
   - GitHub 웹사이트에서 새 저장소를 생성합니다.
3. **원격 저장소 추가**:
   - 터미널에서 다음 명령어를 실행하여 원격 저장소를 추가합니다:
     ```bash
     git remote add origin <GitHub 저장소 URL>
     ```
4. **변경 사항 커밋 및 푸시**:
   - 변경 사항을 커밋하고 GitHub에 푸시합니다:
     ```bash
     git add .
     git commit -m "Initial commit"
     git push -u origin main
     ```

### 5. VS Code에서 GitHub 작업
- **소스 제어 탭**에서 변경 사항을 확인하고 커밋할 수 있습니다.
- **GitHub Pull Requests and Issues** 확장을 사용하여 풀 리퀘스트를 생성하거나 이슈를 관리할 수 있습니다.

### 6. 추가 팁
- **Git 설정**:
  - 사용자 이름과 이메일을 설정합니다:
    ```bash
    git config --global user.name "Your Name"
    git config --global user.email "your.email@example.com"
    ```
- **SSH 키 설정**:
  - SSH 키를 생성하고 GitHub 계정에 추가하여 비밀번호 없이 푸시/풀 작업을 수행할 수 있습니다.

이 과정을 따라 하면 VS Code에서 GitHub와 연동하여 효율적으로 작업할 수 있습니다. 추가적인 질문이 있다면 알려주세요!

JaceKim-TheAL: vscode에서 github repository 연결하는 법

GitHub Copilot: VS Code에서 GitHub 저장소를 연결하는 방법은 다음과 같습니다:

---

### 1. **Git 설치 확인**
- Windows에서 Git이 설치되어 있는지 확인합니다.
- 터미널에서 다음 명령어를 실행:
  ```bash
  git --version
  ```
  Git이 설치되어 있지 않다면 [Git 공식 웹사이트](https://git-scm.com/)에서 다운로드하여 설치하세요.

---

### 2. **GitHub 저장소 생성**
1. GitHub 웹사이트에 로그인합니다.
2. 새 저장소를 생성합니다:
   - 저장소 이름을 입력하고, "Create repository" 버튼을 클릭합니다.

---

### 3. **VS Code에서 GitHub 연결**
1. **Git 초기화**:
   - VS Code에서 터미널을 열고(`Ctrl + ~`), 프로젝트 폴더로 이동합니다:
     ```bash
     cd c:\GitHub\D2501_Notes
     ```
   - Git 저장소를 초기화합니다:
     ```bash
     git init
     ```

2. **GitHub 원격 저장소 추가**:
   - GitHub에서 생성한 저장소 URL을 복사합니다.
   - 터미널에서 다음 명령어를 실행:
     ```bash
     git remote add origin <GitHub 저장소 URL>
     ```

3. **변경 사항 커밋 및 푸시**:
   - 변경 사항을 추가하고 커밋합니다:
     ```bash
     git add .
     git commit -m "Initial commit"
     ```
   - GitHub에 푸시합니다:
     ```bash
     git push -u origin main
     ```

---

### 4. **GitHub 인증**
- VS Code에서 GitHub 계정을 인증하려면:
  1. `Ctrl + Shift + P`를 눌러 명령 팔레트를 엽니다.
  2. `GitHub: Sign In`을 검색하고 실행합니다.
  3. 브라우저가 열리면 GitHub 계정으로 로그인합니다.

---

### 5. **GitHub 확장 설치 (선택 사항)**
- VS Code의 확장 마켓플레이스에서 "GitHub Pull Requests and Issues" 확장을 설치하면 풀 리퀘스트 및 이슈 관리를 쉽게 할 수 있습니다.

---



이제 VS Code에서 GitHub 저장소와 연결이 완료되었습니다. 

GitHub Copilot: VS Code의 Extension을 사용하여 클릭만으로 GitHub에 커밋하는 방법과 사전 설정에 대해 설명하겠습니다.

---

### 1. **GitHub 확장 설치**
- **GitHub Pull Requests and Issues** 확장을 설치합니다:
  1. VS Code의 왼쪽 사이드바에서 **Extensions** 아이콘을 클릭합니다.
  2. "GitHub Pull Requests and Issues"를 검색하고 설치합니다.

---

### 2. **GitHub 계정 인증**
1. **GitHub 로그인**:
   - `Ctrl + Shift + P`를 눌러 명령 팔레트를 열고 `GitHub: Sign In`을 검색하여 실행합니다.
   - 브라우저가 열리며 GitHub 계정으로 로그인하라는 메시지가 표시됩니다.
   - 로그인 후 VS Code와 GitHub 계정이 연결됩니다.

2. **GitHub 저장소 연결**:
   - VS Code에서 작업 중인 프로젝트가 GitHub 저장소와 연결되어 있어야 합니다.
   - 터미널에서 다음 명령어를 실행하여 원격 저장소를 추가합니다:
     ```bash
     git remote add origin <GitHub 저장소 URL>
     ```

---

### 3. **Git 사전 설정**
1. **사용자 이름 및 이메일 설정**:
   - GitHub에서 커밋을 추적하려면 사용자 이름과 이메일을 설정해야 합니다:
     ```bash
     git config --global user.name "Your Name"
     git config --global user.email "your.email@example.com"
     ```

2. **기본 브랜치 설정**:
   - 기본 브랜치를 `main`으로 설정합니다:
     ```bash
     git config --global init.defaultBranch main
     ```

3. **SSH 키 설정 (선택 사항)**:
   - SSH 키를 생성하고 GitHub 계정에 추가하면 비밀번호 없이 푸시할 수 있습니다:
     ```bash
     ssh-keygen -t rsa -b 4096 -C "your.email@example.com"
     ```

---

### 4. **VS Code에서 클릭만으로 커밋하기**
1. **소스 제어 탭 사용**:
   - 왼쪽 사이드바에서 **소스 제어** 아이콘(또는 `Ctrl + Shift + G`)을 클릭합니다.
   - 변경된 파일이 목록에 표시됩니다.

2. **커밋 및 푸시**:
   - 변경된 파일을 선택하고 **+** 버튼을 클릭하여 스테이징합니다.
   - 메시지 입력란에 커밋 메시지를 작성한 후 체크 표시(✔️)를 클릭하여 커밋합니다.
   - 상단의 **...** 메뉴를 클릭하고 "Push"를 선택하여 GitHub에 푸시합니다.

---

### 5. **자동 푸시 설정 (선택 사항)**
- 커밋 후 자동으로 푸시하려면 다음 명령어를 실행합니다:
  ```bash
  git config --global push.default current
  ```

---

### 6. **GitLens 확장 사용 (선택 사항)**
- **GitLens** 확장을 설치하면 Git 기록을 시각적으로 확인하고, 커밋 및 푸시 작업을 더 쉽게 수행할 수 있습니다.

---

이제 VS Code에서 클릭만으로 GitHub에 커밋하고 푸시할 수 있습니다. 추가적인 질문이 있다면 알려주세요!


---

