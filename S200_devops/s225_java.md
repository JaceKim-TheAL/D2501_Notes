<p style="text-align: right"> 
    <a href="./README.md">[INDEX]</a>
</p>

# JAVA
> JDK(Java Development Kit) : 자바 플랫폼 프로그래밍에 사용되는 소프트웨어 개발환경 <br/>
> 현재 JDK는 openJDK와 oracleJDK로 나뉘어진다. <br/>
> 다운로드 : https://jdk.java.net/

### 시스템 환경변수
- `JAVA_HOME` = C:\Java\jdk-24.0.1
- `Path` = %Path%;%JAVA_HOME%\bin;
- `CLASSPATH` = .;%JVAA_HOME%\lib;.\class;
<br/>

### JAVA 컴파일 및 실행
- 컴파일 : javac 자바파일.java -d 클래스파일디렉토리
> `javac Hello.java -d class`
- 실행 : java 클래스명
> `java Hello`
- VSCode에서 Run 이나 F5 로 실행하기보다는 Terminal 혹은 PowerShell 에서 실행
