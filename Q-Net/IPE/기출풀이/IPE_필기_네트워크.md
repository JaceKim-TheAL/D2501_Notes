[[IPE-정보처리기사]](https://github.com/JaceKim-TheAL/D2501_Notes/tree/main/Q-Net/IPE)
---

# 필기요약 - 네트워크

- KeyWord :
구문/의미/시간, 물리계층, ICMP, Protocol, OSPF, IPv6, NAT, RARP, IPv6, IPv4 관련 문제, 가상 회선/데이터 그램, 데이터 링크/네트워크/표현 계층, 서브넷팅 문제, IGP/EGP/OSPF/BGF, 서브넷팅 문제, 가상회선/데이터그램, SSH, L2TP, ICMP, hamming, FEC, BEC, parity, CRC, hdlc 관련, NAT, ATM, laaS Paas SaaS, RIP


---

### 프로토콜의 기본요소 3가지
`기출` 20년 1회 
- 프로토콜은 서로 다른 기기들 간의 데이터 교환을 원활하게 수행할 수 있도록 표준화시켜 놓은 통신 규약이다. 프로토콜의 기본 요소 3가지를 쓰시오.

`정답` 구문, 의미, 시간
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### ICMP
`기출` 20년 3회 
- ( )는 TCP/IP기반의 인터넷 통신 서비스에서 인터넷 프로토콜과 조합하여 통신 중에 발생하는 오류의 처리와 전송 경로 변경 등을 위한 제어 메시지를 취급하는 무연결 전송용 프로토콜로, OSI기본 참조 모델의 네트워크 계층에 속한다

`정답` ICMP
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### Protocol
`기출` 20년 3회
- 심리학자 톰 마릴은 컴퓨터가 메시지를 전달하고 메시지가 제대로 도착했는지 확인하며 도착하지 않았을 경우 메시지를 재전송하는 일련의 방법을 기술적 은어를 뜻하는 ( )이라는 용어로 정의하였다

`정답` 프로토콜
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### OSPF
`기출` 20년 3회
- 다음 설명에 해당하는 라우팅 프로토콜을 쓰시오.
```
RIP의 단점을 해결하여 새로운 기능을 지원하는 인터넷 프로토콜
최단 경로 라우팅 지원
대규모 네트워크에 많이 사용
최단 경로 탐색에 Dijkstra 알고리즘 사용
```

`정답` OSPF
<br/>

**OSPF (Open Shortest Path First)** 는 네트워크에서 최적의 경로를 자동으로 계산해주는 동적 라우팅 프로토콜이에요. 특히 중대형 네트워크에서 많이 사용되며, 링크 상태 기반(Link-State) 라우팅 방식과 다익스트라(Dijkstra) 알고리즘을 활용해 빠르고 안정적인 경로를 설정합니다.
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### IPv6
`기출` 20년 4회
- 네트워크 및 인터넷과 관련된 다음 설명에 해당하는 용어를 영문으로 쓰시오
```
현재 사용하고 있는 IPv4의 주소 부족 문제를 해결하기 위해 개발됨
16비트씩 8부분, 총 128비트로 구성되어 있다
각 부분을 16진수로 표현하고 콜롬으로 구분한다
```

`정답` IPv6
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### NAT
`기출` 20년 4회
- 네트워크에 대한 다음 설명에 해당하는 용어를 쓰시오.
```
우리말로 번역하면 네트워크 주소 변환이라는 의미의 영문 3글자 약자이다
1개의 정식 IP주소에 다량의 가상 사설 IP주소를 할당 및 연결하는 방식이다
```

`정답` NAT
<br/>

**NAT(Network Address Translation)** 는 네트워크에서 IP 주소를 변환해주는 기술이에요. 주로 사설 IP 주소를 공인 IP 주소로 바꿔서 인터넷에 접속할 수 있도록 해주는 역할을 하죠.
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### RARP
`기출` 
- 네트워크 및 인터넷과 관련된 다음 설명에 해당하는 용어를 쓰시오
```
인터넷 환경에서의 호스트 상호 간 통신에서 연결된 네트워크 접속 장치의 물리적 주소인 MAC주소를 이용하여 IP주소를 찾는 인터넷 계층의 프로토콜로, 역순 주소 결정 프로토콜이라 불린다
```

`정답` RARP
<br/>

**RARP (Reverse Address Resolution Protocol)** 는 네트워크에서 MAC 주소를 기반으로 IP 주소를 알아내는 프로토콜이에요. 말 그대로 ARP(Address Resolution Protocol)의 "역방향" 버전이죠.
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### IPv6
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### IPv4 관련 문제
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### 가상 회선/데이터 그램
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### 데이터 링크/네트워크/표현 계층
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### 서브넷팅 문제
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### IGP/EGP/OSPF/BGF
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### 서브넷팅 문제
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### 가상회선/데이터그램
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### SSH
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### L2TP
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### ICMP
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### hamming
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### FEC
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### BEC
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### parity
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### CRC
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### hdlc 관련
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### NAT
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### ATM
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### laaS Paas SaaS
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

### RIP
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

---
### 
`기출` 
- 

`정답` 
<br/>
<hr style="height: 2px; background-color: gray; border: none; width: 80%;">

---