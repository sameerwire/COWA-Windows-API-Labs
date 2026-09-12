# COWA Windows API Labs

Hands-on Windows API and Windows internals exercises completed while preparing for the **Certified Offensive Windows API (COWA)** certification by Red Team Leaders.

The repository contains practical implementations from the course labs, along with the Windows API concepts and offensive security topics covered during preparation.

## Challenges

### 01. FlagRunner

A process memory manipulation exercise requiring interaction with a running process and writing a specific payload into a target memory region.

**Concepts:**

* Process enumeration
* Process IDs and handles
* Cross-process memory operations
* Memory regions and protection
* Remote memory allocation
* x86 vs x64 architecture considerations

**Windows APIs:**

* `CreateToolhelp32Snapshot`
* `Process32First` / `Process32Next`
* `OpenProcess`
* `VirtualQueryEx`
* `VirtualAllocEx`
* `WriteProcessMemory`
* `CloseHandle`

---

### 02. FlagWindow

A Windows GUI enumeration exercise focused on identifying a specific window and extracting its class name and title.

**Concepts:**

* Top-level window enumeration
* Window class identification
* Window title extraction
* Win32 GUI programming

**Windows APIs:**

* `EnumWindows`
* `GetClassNameA`
* `GetWindowTextA`

---

### 03. Hidden Password

A GUI inspection exercise involving enumeration of child windows and extraction of text from Windows controls.

**Concepts:**

* Parent and child window relationships
* Child-window enumeration
* GUI control identification
* Extracting control text

**Windows APIs:**

* `EnumWindows`
* `EnumChildWindows`
* `GetClassNameA`
* `GetWindowTextA`

## Windows API & Internals Concepts

The preparation course covered a broader set of Windows development and internals concepts beyond the three practical challenges.

### C++ & Win32 Fundamentals

* Windows API programming
* Windows-specific data types
* Structures and handles
* Error handling with `GetLastError`
* Resource management and RAII
* Low-level C++ development

### Processes & Threads

* Process creation and termination
* Process and thread handles
* Process and thread enumeration
* Process IDs and thread IDs
* Thread contexts
* Process injection concepts
* Thread hijacking concepts
* Synchronization and handle management

### Memory Management

* `VirtualAlloc` / `VirtualFree`
* `VirtualAllocEx`
* `VirtualQueryEx`
* `ReadProcessMemory`
* `WriteProcessMemory`
* Memory protection levels
* Remote process memory
* In-memory execution

### Files & I/O

* File handles
* `CreateFile`
* `ReadFile`
* `WriteFile`
* File access and sharing modes
* Windows I/O operations

### DLLs & API Resolution

* Dynamic DLL loading
* `LoadLibrary`
* `GetProcAddress`
* Function resolution by name
* Function resolution by ordinal
* Import Address Table (IAT)
* Export Address Table (EAT)
* Dynamic API resolution
* API hashing

### Windows GUI

* Window enumeration
* Child-window enumeration
* Window classes
* Window titles
* GUI control identification
* `SendMessage`
* `MessageBox`

### Tokens & Privileges

* Access tokens
* `OpenProcessToken`
* Token privileges
* `LookupPrivilegeValue`
* `AdjustTokenPrivileges`
* `SeDebugPrivilege`

### Native APIs & System Calls

* User-mode to kernel-mode transitions
* Native Windows APIs
* `ntdll.dll`
* System Service Numbers (SSNs)
* Syscall stubs
* Direct syscalls
* Indirect syscalls
* x64 syscall conventions

## EDR, Evasion & Stealth Concepts

The course also covered how endpoint security products observe Windows activity and the techniques used to understand or bypass common detection surfaces.

Topics included:

* User-mode API hooking
* EDR hooks in `ntdll.dll`
* API unhooking
* Direct and indirect syscalls
* Syscall stubs and SSNs
* API hashing
* Dynamic API resolution
* IAT/EAT manipulation
* In-memory execution
* Shellcode loading and execution
* Process injection
* Thread hijacking
* DLL loading and hijacking
* Process hollowing
* Process Doppelgänging
* Parent process spoofing
* Living-off-the-Land techniques (LOLBins)
* Payload encoding and obfuscation
* Memory-based detection considerations
* EDR detection surfaces
* Behavioral analysis
* HookChain and related syscall techniques
* Clean syscall mapping and Halo's Gate concepts

These topics were studied from an offensive security and Windows internals perspective, with a focus on understanding how endpoint defenses observe process, memory, API, and syscall activity.

## Environment

* **Language:** C++
* **Platform:** Windows
* **Compiler:** Microsoft Visual C++ (MSVC)
* **APIs:** Win32 / Windows Native APIs
* **Architecture:** x64 where required

## Purpose

This repository serves as a practical reference for Windows API programming and offensive Windows development concepts studied during COWA preparation.

The focus is on understanding how Windows processes, memory, threads, APIs, GUI components, tokens, and system calls work at a lower level, and how these mechanisms relate to offensive security and EDR detection.

## Certification

**Certified Offensive Windows API (COWA)**
Red Team Leaders
