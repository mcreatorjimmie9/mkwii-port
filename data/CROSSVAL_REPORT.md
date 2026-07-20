# Phase 14: Binary Symbol Cross-Validation Report

**Binary**: main.dol (2,749,248 bytes / 2.62 MB)
**Entry Point**: `0x800060A4`
**ELF→DOL Relocation Delta**: `0x003C79FC` (3,963,388 bytes)

> **Key Finding**: GENESIS `@addr` annotations use ELF virtual addresses (base ~0x80400000). The DOL loads code at 0x8000xxxx. A relocation delta of `0x003C79FC` is applied to map annotations to DOL sections.

## 1. DOL Binary Layout

### Text Sections (Code)

| Idx | DOL Address Range         | ELF Virtual Range          | Size           |
|-----|---------------------------|----------------------------|----------------|
| 0   | `0x80004000`–`0x8000645F` | `0x803CB9FC`–`0x803CDE5B` |      9,312 B (9.1 KB) |
| 1   | `0x800072C0`–`0x80244D3F` | `0x803CECBC`–`0x8060C73B` |  2,349,696 B (2294.6 KB) |
|     | **Total**                 |                            | **2,359,008 B (2303.7 KB)** |

### Data Sections

| Idx | DOL Address Range         | Size           |
|-----|---------------------------|----------------|
|  0  | `0x80006460`–`0x80006A1F` |      1,472 B (1.4 KB) |
|  1  | `0x80006A20`–`0x800072BF` |      2,208 B (2.2 KB) |
|  2  | `0x80244D40`–`0x80244DFF` |        192 B (0.2 KB) |
|  3  | `0x80244E00`–`0x80244E1F` |         32 B (0.0 KB) |
|  4  | `0x80244E40`–`0x8025825F` |     78,880 B (77.0 KB) |
|  5  | `0x80258260`–`0x8029FCFF` |    293,536 B (286.7 KB) |
|  6  | `0x80380880`–`0x80381C3F` |      5,056 B (4.9 KB) |
|  7  | `0x80382C20`–`0x80384DBF` |      8,608 B (8.4 KB) |
|     | **Total**                 | **389,984 B (380.8 KB)** |

### BSS Section
- DOL Address: `0x8029FD00`–`0x80384DFB` (938,236 bytes / 916.2 KB)
- ELF Virtual: `0x806676FC`–`0x8074C7F7`

## 2. Annotation Statistics

| Metric | Value |
|--------|-------|
| Total @addr annotations | **21,637** |
| Unique addresses | **8,138** |
| Source files with annotations | 209 |
| DOL code size | 2,359,008 bytes (2303.7 KB) |
| Address coverage | **1.38%** (8,138 addresses / 589,752 instructions) |
| Addresses shared across files | 7,521 |
| Max files sharing one address | 8 |
| ELF address range | `0x0000804C` – `0x80500B2A4` |

## 3. Address Classification (Relocated)

| Classification | Count | Percentage |
|----------------|-------|------------|
| ✅ code | 20,364 | 94.12% |
| 📋 data | 591 | 2.73% |
| 📝 bss | 70 | 0.32% |
| ⚠️ out_of_range | 612 | 2.83% |

> **Validation result**: 94.12% of annotations point to valid code sections. 591 point to data, 70 to BSS, and 612 are out of range.

## 4. Non-Code Annotations

> ℹ️ **1273 annotation(s)** do not point to code sections. These may reference data symbols, vtables, BSS variables, or be incorrect.

### DATA References (591 annotations)

| ELF Address | DOL Address | File | Line |
|-------------|-------------|------|------|
| `0x80621000` | `0x80259604` | UI/UIControlSystem.hpp | 108 |
| `0x806211A0` | `0x802597A4` | UI/UIControlSystem.hpp | 110 |
| `0x80621330` | `0x80259934` | UI/UIControlSystem.hpp | 114 |
| `0x80621500` | `0x80259B04` | UI/UIControlSystem.hpp | 116 |
| `0x80621680` | `0x80259C84` | UI/UIControlSystem.hpp | 120 |
| `0x806217A0` | `0x80259DA4` | UI/UIControlSystem.hpp | 122 |
| `0x80621880` | `0x80259E84` | UI/UIControlSystem.hpp | 124 |
| `0x80621940` | `0x80259F44` | UI/UIControlSystem.hpp | 126 |
| `0x80621A20` | `0x8025A024` | UI/UIControlSystem.hpp | 128 |
| `0x80621B00` | `0x8025A104` | UI/UIControlSystem.hpp | 132 |
| `0x80621C80` | `0x8025A284` | UI/UIControlSystem.hpp | 134 |
| `0x80621DA0` | `0x8025A3A4` | UI/UIControlSystem.hpp | 136 |
| `0x80621F00` | `0x8025A504` | UI/UIControlSystem.hpp | 138 |
| `0x80622000` | `0x8025A604` | UI/UIControlSystem.hpp | 140 |
| `0x80622100` | `0x8025A704` | UI/UIControlSystem.hpp | 144 |
| `0x80622220` | `0x8025A824` | UI/UIControlSystem.hpp | 146 |
| `0x80622340` | `0x8025A944` | UI/UIControlSystem.hpp | 148 |
| `0x80622460` | `0x8025AA64` | UI/UIControlSystem.hpp | 150 |
| `0x80622540` | `0x8025AB44` | UI/UIControlSystem.hpp | 152 |
| `0x80622640` | `0x8025AC44` | UI/UIControlSystem.hpp | 156 |
| `0x80622720` | `0x8025AD24` | UI/UIControlSystem.hpp | 158 |
| `0x80622800` | `0x8025AE04` | UI/UIControlSystem.hpp | 163 |
| `0x80622900` | `0x8025AF04` | UI/UIControlSystem.hpp | 173 |
| `0x80622A00` | `0x8025B004` | UI/UIControlSystem.hpp | 175 |
| `0x80622B00` | `0x8025B104` | UI/UIControlSystem.hpp | 181 |
| `0x80622C40` | `0x8025B244` | UI/UIControlSystem.hpp | 185 |
| `0x80622D00` | `0x8025B304` | UI/UIControlSystem.hpp | 187 |
| `0x80647C28` | `0x8028022C` | UI/UIControl.hpp | 49 |
| `0x80647E6C` | `0x80280470` | UI/UIControl.hpp | 52 |
| `0x80647DB0` | `0x802803B4` | UI/UIControl.hpp | 55 |
| `0x80647B98` | `0x8028019C` | UI/UIControl.hpp | 90 |
| `0x806491A8` | `0x802817AC` | UI/UIControl.hpp | 93 |
| `0x80649500` | `0x80281B04` | UI/UIControl.hpp | 149 |
| `0x80649644` | `0x80281C48` | UI/UIControl.hpp | 151 |
| `0x8060C900` | `0x80244F04` | UI/PageController.cpp | 363 |
| `0x8060CB40` | `0x80245144` | UI/PageController.cpp | 417 |
| `0x8060CD00` | `0x80245304` | UI/PageController.cpp | 439 |
| `0x8060CE80` | `0x80245484` | UI/PageController.cpp | 458 |
| `0x8060D000` | `0x80245604` | UI/PageController.cpp | 471 |
| `0x8060D100` | `0x80245704` | UI/PageController.cpp | 478 |
| `0x8060D200` | `0x80245804` | UI/PageController.cpp | 485 |
| `0x8060D300` | `0x80245904` | UI/PageController.cpp | 490 |
| `0x8060D400` | `0x80245A04` | UI/PageController.cpp | 498 |
| `0x8060D560` | `0x80245B64` | UI/PageController.cpp | 506 |
| `0x80647C28` | `0x8028022C` | UI/UIControl.cpp | 89 |
| `0x80647E6C` | `0x80280470` | UI/UIControl.cpp | 98 |
| `0x80647DB0` | `0x802803B4` | UI/UIControl.cpp | 112 |
| `0x80647B98` | `0x8028019C` | UI/UIControl.cpp | 144 |
| `0x806491A8` | `0x802817AC` | UI/UIControl.cpp | 157 |
| `0x80649500` | `0x80281B04` | UI/UIControl.cpp | 232 |
| ... and 541 more | | | |

### BSS References (70 annotations)

| ELF Address | DOL Address | File | Line |
|-------------|-------------|------|------|
| `0x8071E858` | `0x80356E5C` | UI/UIManager.hpp | 55 |
| `0x8071E50C` | `0x80356B10` | UI/UIManager.hpp | 60 |
| `0x8071DDE4` | `0x803563E8` | UI/UIManager.hpp | 62 |
| `0x8071E06C` | `0x80356670` | UI/UIManager.hpp | 130 |
| `0x8071E50C` | `0x80356B10` | UI/UIManager.cpp | 118 |
| `0x8071DDE4` | `0x803563E8` | UI/UIManager.cpp | 155 |
| `0x8071E06C` | `0x80356670` | UI/UIManager.cpp | 284 |
| `0x8071DDE4` | `0x803563E8` | UI/SectionDirector.hpp | 57 |
| `0x8071E06C` | `0x80356670` | UI/SectionDirector.hpp | 60 |
| `0x8071E188` | `0x8035678C` | UI/SectionDirector.hpp | 63 |
| `0x8071E50C` | `0x80356B10` | UI/SectionDirector.hpp | 66 |
| `0x8071E624` | `0x80356C28` | UI/SectionDirector.hpp | 69 |
| `0x8071E758` | `0x80356D5C` | UI/SectionDirector.hpp | 72 |
| `0x8071E7F8` | `0x80356DFC` | UI/SectionDirector.hpp | 75 |
| `0x8071E858` | `0x80356E5C` | UI/SectionDirector.hpp | 78 |
| `0x8071E25C` | `0x80356860` | UI/SectionDirector.hpp | 88 |
| `0x8071E38C` | `0x80356990` | UI/SectionDirector.hpp | 90 |
| `0x8070F680` | `0x80347C84` | UI/SectionDirector.hpp | 148 |
| `0x8071DDE4` | `0x803563E8` | UI/SectionDirector.cpp | 54 |
| `0x8071E06C` | `0x80356670` | UI/SectionDirector.cpp | 123 |
| `0x8071E188` | `0x8035678C` | UI/SectionDirector.cpp | 142 |
| `0x8071E50C` | `0x80356B10` | UI/SectionDirector.cpp | 152 |
| `0x8071E624` | `0x80356C28` | UI/SectionDirector.cpp | 174 |
| `0x8071E758` | `0x80356D5C` | UI/SectionDirector.cpp | 207 |
| `0x8071E7F8` | `0x80356DFC` | UI/SectionDirector.cpp | 232 |
| `0x8071E858` | `0x80356E5C` | UI/SectionDirector.cpp | 242 |
| `0x8071E25C` | `0x80356860` | UI/SectionDirector.cpp | 252 |
| `0x8071E38C` | `0x80356990` | UI/SectionDirector.cpp | 272 |
| `0x8070F680` | `0x80347C84` | UI/SectionDirector.cpp | 308 |
| `0x8072000C` | `0x80358610` | AudioEngine/SoundArchive.cpp | 15 |
| `0x8072015C` | `0x80358760` | AudioEngine/SoundArchive.cpp | 98 |
| `0x80720700` | `0x80358D04` | AudioEngine/SoundArchive.cpp | 140 |
| `0x80720900` | `0x80358F04` | AudioEngine/SoundArchive.cpp | 158 |
| `0x80720C00` | `0x80359204` | AudioEngine/SoundArchive.cpp | 180 |
| `0x80720F00` | `0x80359504` | AudioEngine/SoundArchive.cpp | 202 |
| `0x80721200` | `0x80359804` | AudioEngine/SoundArchive.cpp | 214 |
| `0x80721500` | `0x80359B04` | AudioEngine/SoundArchive.cpp | 227 |
| `0x80721700` | `0x80359D04` | AudioEngine/SoundArchive.cpp | 235 |
| `0x80721900` | `0x80359F04` | AudioEngine/SoundArchive.cpp | 243 |
| `0x80721C00` | `0x8035A204` | AudioEngine/SoundArchive.cpp | 257 |
| `0x80722400` | `0x8035AA04` | AudioEngine/SoundArchive.cpp | 266 |
| `0x80722700` | `0x8035AD04` | AudioEngine/SoundArchive.cpp | 277 |
| `0x80722A00` | `0x8035B004` | AudioEngine/SoundArchive.cpp | 286 |
| `0x80722D00` | `0x8035B304` | AudioEngine/SoundArchive.cpp | 295 |
| `0x80722E14` | `0x8035B418` | AudioEngine/SoundArchive.cpp | 304 |
| `0x80723100` | `0x8035B704` | AudioEngine/SoundArchive.cpp | 313 |
| `0x80723400` | `0x8035BA04` | AudioEngine/SoundArchive.cpp | 321 |
| `0x80723700` | `0x8035BD04` | AudioEngine/SoundArchive.cpp | 329 |
| `0x80723A00` | `0x8035C004` | AudioEngine/SoundArchive.cpp | 337 |
| `0x80721F68` | `0x8035A56C` | AudioEngine/SoundArchive.cpp | 346 |
| ... and 20 more | | | |

### OUT_OF_RANGE References (612 annotations)

| ELF Address | DOL Address | File | Line |
|-------------|-------------|------|------|
| `0x80174008` | `0x7FDAC60C` | EGG/FrameTimer.hpp | 22 |
| `0x80174060` | `0x7FDAC664` | EGG/FrameTimer.hpp | 24 |
| `0x801740A0` | `0x7FDAC6A4` | EGG/FrameTimer.hpp | 27 |
| `0x80174120` | `0x7FDAC724` | EGG/FrameTimer.hpp | 29 |
| `0x801741A0` | `0x7FDAC7A4` | EGG/FrameTimer.hpp | 31 |
| `0x80174220` | `0x7FDAC824` | EGG/FrameTimer.hpp | 33 |
| `0x80174280` | `0x7FDAC884` | EGG/FrameTimer.hpp | 35 |
| `0x80174300` | `0x7FDAC904` | EGG/FrameTimer.hpp | 37 |
| `0x80174360` | `0x7FDAC964` | EGG/FrameTimer.hpp | 39 |
| `0x801743C0` | `0x7FDAC9C4` | EGG/FrameTimer.hpp | 41 |
| `0x80174420` | `0x7FDACA24` | EGG/FrameTimer.hpp | 44 |
| `0x80174480` | `0x7FDACA84` | EGG/FrameTimer.hpp | 46 |
| `0x80174500` | `0x7FDACB04` | EGG/FrameTimer.hpp | 76 |
| `0x80174560` | `0x7FDACB64` | EGG/FrameTimer.hpp | 78 |
| `0x801745C0` | `0x7FDACBC4` | EGG/FrameTimer.hpp | 81 |
| `0x80174640` | `0x7FDACC44` | EGG/FrameTimer.hpp | 83 |
| `0x80174700` | `0x7FDACD04` | EGG/FrameTimer.hpp | 85 |
| `0x80174780` | `0x7FDACD84` | EGG/FrameTimer.hpp | 87 |
| `0x80174800` | `0x7FDACE04` | EGG/FrameTimer.hpp | 90 |
| `0x80174860` | `0x7FDACE64` | EGG/FrameTimer.hpp | 92 |
| `0x80176008` | `0x7FDAE60C` | EGG/ArchiveHeap.cpp | 18 |
| `0x80176060` | `0x7FDAE664` | EGG/ArchiveHeap.cpp | 27 |
| `0x801760C0` | `0x7FDAE6C4` | EGG/ArchiveHeap.cpp | 32 |
| `0x80176140` | `0x7FDAE744` | EGG/ArchiveHeap.cpp | 43 |
| `0x801761C0` | `0x7FDAE7C4` | EGG/ArchiveHeap.cpp | 62 |
| `0x80176220` | `0x7FDAE824` | EGG/ArchiveHeap.cpp | 68 |
| `0x801762A0` | `0x7FDAE8A4` | EGG/ArchiveHeap.cpp | 81 |
| `0x80176300` | `0x7FDAE904` | EGG/ArchiveHeap.cpp | 87 |
| `0x80176360` | `0x7FDAE964` | EGG/ArchiveHeap.cpp | 92 |
| `0x80176400` | `0x7FDAEA04` | EGG/ArchiveHeap.cpp | 102 |
| `0x80176460` | `0x7FDAEA64` | EGG/ArchiveHeap.cpp | 108 |
| `0x801764C0` | `0x7FDAEAC4` | EGG/ArchiveHeap.cpp | 113 |
| `0x80176540` | `0x7FDAEB44` | EGG/ArchiveHeap.cpp | 120 |
| `0x80176600` | `0x7FDAEC04` | EGG/ArchiveHeap.cpp | 149 |
| `0x80176680` | `0x7FDAEC84` | EGG/ArchiveHeap.cpp | 155 |
| `0x80176700` | `0x7FDAED04` | EGG/ArchiveHeap.cpp | 164 |
| `0x80176780` | `0x7FDAED84` | EGG/ArchiveHeap.cpp | 177 |
| `0x80176800` | `0x7FDAEE04` | EGG/ArchiveHeap.cpp | 183 |
| `0x80176880` | `0x7FDAEE84` | EGG/ArchiveHeap.cpp | 189 |
| `0x80176900` | `0x7FDAEF04` | EGG/ArchiveHeap.cpp | 199 |
| `0x80176A00` | `0x7FDAF004` | EGG/ArchiveHeap.cpp | 213 |
| `0x80176A80` | `0x7FDAF084` | EGG/ArchiveHeap.cpp | 220 |
| `0x80176B00` | `0x7FDAF104` | EGG/ArchiveHeap.cpp | 225 |
| `0x80176B40` | `0x7FDAF144` | EGG/ArchiveHeap.cpp | 235 |
| `0x80176B80` | `0x7FDAF184` | EGG/ArchiveHeap.cpp | 237 |
| `0x80176BB0` | `0x7FDAF1B4` | EGG/ArchiveHeap.cpp | 239 |
| `0x80176BE0` | `0x7FDAF1E4` | EGG/ArchiveHeap.cpp | 241 |
| `0x80176C20` | `0x7FDAF224` | EGG/ArchiveHeap.cpp | 243 |
| `0x80176C60` | `0x7FDAF264` | EGG/ArchiveHeap.cpp | 245 |
| `0x80176C90` | `0x7FDAF294` | EGG/ArchiveHeap.cpp | 247 |
| ... and 562 more | | | |

## 5. Per-Module Breakdown

| Module | Files | Unique Addrs | Annotations | Code | Data | BSS | OOR |
|--------|-------|-------------|-------------|------|------|-----|-----|
| AudioEngine          |  20 |   181 |    335 |   294 |    0 |  41 |   0 |
| EGG                  |  12 |   419 |    555 |     0 |    0 |   0 | 555 |
| ItemSystem           |  15 |    48 |     48 |     5 |    6 |   0 |  37 |
| NW4R                 |   9 |   126 |    144 |   144 |    0 |   0 |   0 |
| Network              |  10 |   151 |    334 |   334 |    0 |   0 |   0 |
| Online               |   6 |    75 |    135 |     0 |  135 |   0 |   0 |
| RaceEngine           |  19 |    50 |    100 |    82 |    8 |   0 |  10 |
| Rendering            |  12 |    95 |     96 |    96 |    0 |   0 |   0 |
| Runtime              |  64 |  6919 |  19234 | 19224 |    0 |   0 |  10 |
| Scene                |  12 |   118 |    235 |    25 |  210 |   0 |   0 |
| UI                   |  30 |   212 |    421 |   160 |  232 |  29 |   0 |

## 6. Code Coverage Density Map (4KB bins)

Distribution of unique addresses across 4KB bins in DOL text[1]:

```
DOL 0x800382C0 (ELF 0x803FFCBC): █████ (13)
DOL 0x800392C0 (ELF 0x80400CBC): ███ (7)
DOL 0x8003A2C0 (ELF 0x80401CBC): ███ (8)
DOL 0x8003B2C0 (ELF 0x80402CBC): █████ (13)
DOL 0x8003C2C0 (ELF 0x80403CBC): ███████ (16)
DOL 0x8003D2C0 (ELF 0x80404CBC): █████ (11)
DOL 0x8003E2C0 (ELF 0x80405CBC): █████ (12)
DOL 0x8003F2C0 (ELF 0x80406CBC): ██ (6)
DOL 0x800402C0 (ELF 0x80407CBC): ███████ (16)
DOL 0x800412C0 (ELF 0x80408CBC): ██████████ (22)
DOL 0x800422C0 (ELF 0x80409CBC): █████ (12)
DOL 0x800432C0 (ELF 0x8040ACBC): ███████ (16)
DOL 0x800442C0 (ELF 0x8040BCBC): ███████ (17)
DOL 0x800452C0 (ELF 0x8040CCBC): ██████ (15)
DOL 0x800462C0 (ELF 0x8040DCBC): ████████ (19)
DOL 0x800472C0 (ELF 0x8040ECBC): ███ (8)
DOL 0x800482C0 (ELF 0x8040FCBC): █████ (12)
DOL 0x800492C0 (ELF 0x80410CBC): ███████ (16)
DOL 0x8004A2C0 (ELF 0x80411CBC): ███████ (17)
DOL 0x8004B2C0 (ELF 0x80412CBC): █████████ (20)
DOL 0x8004C2C0 (ELF 0x80413CBC): ████████████ (27)
DOL 0x8004D2C0 (ELF 0x80414CBC): ███████ (17)
DOL 0x8004E2C0 (ELF 0x80415CBC): █████ (13)
DOL 0x8004F2C0 (ELF 0x80416CBC): ██████ (14)
DOL 0x800502C0 (ELF 0x80417CBC): ███ (7)
DOL 0x800512C0 (ELF 0x80418CBC): ██████████████ (31)
DOL 0x800522C0 (ELF 0x80419CBC): ██████████ (24)
DOL 0x800532C0 (ELF 0x8041ACBC): ███████ (17)
DOL 0x800542C0 (ELF 0x8041BCBC): ███████ (16)
DOL 0x800552C0 (ELF 0x8041CCBC): █████████ (20)
DOL 0x800562C0 (ELF 0x8041DCBC): ████ (9)
DOL 0x800572C0 (ELF 0x8041ECBC): █████ (11)
DOL 0x800582C0 (ELF 0x8041FCBC): ███ (8)
DOL 0x800592C0 (ELF 0x80420CBC): █████████ (21)
DOL 0x8005A2C0 (ELF 0x80421CBC): █████ (11)
DOL 0x8005B2C0 (ELF 0x80422CBC): ████ (10)
DOL 0x8005C2C0 (ELF 0x80423CBC): ████ (9)
DOL 0x8005D2C0 (ELF 0x80424CBC): ████ (9)
DOL 0x8005E2C0 (ELF 0x80425CBC): ████████ (18)
DOL 0x8005F2C0 (ELF 0x80426CBC): █████ (13)
DOL 0x800602C0 (ELF 0x80427CBC): ████ (10)
DOL 0x800612C0 (ELF 0x80428CBC): ████████ (18)
DOL 0x800622C0 (ELF 0x80429CBC): █████████ (20)
DOL 0x800632C0 (ELF 0x8042ACBC): █ (4)
DOL 0x800642C0 (ELF 0x8042BCBC): ███ (7)
DOL 0x800652C0 (ELF 0x8042CCBC): ████ (9)
DOL 0x800662C0 (ELF 0x8042DCBC): █████ (13)
DOL 0x800672C0 (ELF 0x8042ECBC): █████ (12)
DOL 0x800682C0 (ELF 0x8042FCBC): ██████████ (22)
DOL 0x800692C0 (ELF 0x80430CBC): ██████████ (24)
DOL 0x8006A2C0 (ELF 0x80431CBC): ████ (9)
DOL 0x8006B2C0 (ELF 0x80432CBC): ████████ (19)
DOL 0x8006C2C0 (ELF 0x80433CBC): █ (3)
DOL 0x8006D2C0 (ELF 0x80434CBC): █████ (13)
DOL 0x8006E2C0 (ELF 0x80435CBC): ██████████████████████████████████████████████████ (110)
DOL 0x8006F2C0 (ELF 0x80436CBC): █████ (12)
DOL 0x800702C0 (ELF 0x80437CBC): ████████ (18)
DOL 0x800712C0 (ELF 0x80438CBC): ███████ (16)
DOL 0x800722C0 (ELF 0x80439CBC): ██████ (14)
DOL 0x800732C0 (ELF 0x8043ACBC): ██████ (15)
DOL 0x800742C0 (ELF 0x8043BCBC): █████ (12)
DOL 0x800752C0 (ELF 0x8043CCBC): ████ (10)
DOL 0x800762C0 (ELF 0x8043DCBC): ██████████ (22)
DOL 0x800772C0 (ELF 0x8043ECBC): █████ (13)
DOL 0x800782C0 (ELF 0x8043FCBC): ██████████ (23)
DOL 0x800792C0 (ELF 0x80440CBC): █████████ (21)
DOL 0x8007A2C0 (ELF 0x80441CBC): ██ (6)
DOL 0x8007B2C0 (ELF 0x80442CBC): ████████████ (27)
DOL 0x8007C2C0 (ELF 0x80443CBC): █████ (11)
DOL 0x8007D2C0 (ELF 0x80444CBC): ████ (10)
DOL 0x8007E2C0 (ELF 0x80445CBC): █ (4)
DOL 0x8007F2C0 (ELF 0x80446CBC): █████████ (20)
DOL 0x800802C0 (ELF 0x80447CBC): ███████ (17)
DOL 0x800812C0 (ELF 0x80448CBC): ███████ (17)
DOL 0x800822C0 (ELF 0x80449CBC): ███████ (16)
DOL 0x800832C0 (ELF 0x8044ACBC): █████████ (20)
DOL 0x800842C0 (ELF 0x8044BCBC): █████████ (21)
DOL 0x800852C0 (ELF 0x8044CCBC): ██████ (14)
DOL 0x800862C0 (ELF 0x8044DCBC): █ (4)
DOL 0x800872C0 (ELF 0x8044ECBC): ███████████ (25)
DOL 0x800882C0 (ELF 0x8044FCBC): █████ (12)
DOL 0x800892C0 (ELF 0x80450CBC): ██████████ (23)
DOL 0x8008A2C0 (ELF 0x80451CBC): ██████ (15)
DOL 0x8008B2C0 (ELF 0x80452CBC): █████████ (20)
DOL 0x8008C2C0 (ELF 0x80453CBC): ██████████ (23)
DOL 0x8008D2C0 (ELF 0x80454CBC): █████████████ (29)
DOL 0x8008E2C0 (ELF 0x80455CBC): █████████ (21)
DOL 0x8008F2C0 (ELF 0x80456CBC): ██████████ (22)
DOL 0x800902C0 (ELF 0x80457CBC): ████████ (19)
DOL 0x800912C0 (ELF 0x80458CBC): ███████ (16)
DOL 0x800922C0 (ELF 0x80459CBC): █████████ (21)
DOL 0x800932C0 (ELF 0x8045ACBC): ██████████ (24)
DOL 0x800942C0 (ELF 0x8045BCBC): ████████ (19)
DOL 0x800952C0 (ELF 0x8045CCBC): ██████████ (23)
DOL 0x800962C0 (ELF 0x8045DCBC): ███ (8)
DOL 0x800982C0 (ELF 0x8045FCBC): ████ (9)
DOL 0x800992C0 (ELF 0x80460CBC): ██ (6)
DOL 0x8009A2C0 (ELF 0x80461CBC): ████████ (18)
DOL 0x8009B2C0 (ELF 0x80462CBC): ████████ (18)
DOL 0x8009C2C0 (ELF 0x80463CBC): █████████ (20)
DOL 0x8009D2C0 (ELF 0x80464CBC): █████████ (20)
DOL 0x8009E2C0 (ELF 0x80465CBC):  (2)
DOL 0x8009F2C0 (ELF 0x80466CBC): ███ (8)
DOL 0x800A02C0 (ELF 0x80467CBC): ██ (5)
DOL 0x800A12C0 (ELF 0x80468CBC): █ (4)
DOL 0x800A22C0 (ELF 0x80469CBC): ██ (6)
DOL 0x800A32C0 (ELF 0x8046ACBC): ██ (6)
DOL 0x800A42C0 (ELF 0x8046BCBC): ██████ (14)
DOL 0x800A52C0 (ELF 0x8046CCBC): ███ (8)
DOL 0x800A62C0 (ELF 0x8046DCBC): ███████ (17)
DOL 0x800A72C0 (ELF 0x8046ECBC): ██████ (15)
DOL 0x800A82C0 (ELF 0x8046FCBC): ████ (9)
DOL 0x800A92C0 (ELF 0x80470CBC): ███ (8)
DOL 0x800AA2C0 (ELF 0x80471CBC): ███ (7)
DOL 0x800AB2C0 (ELF 0x80472CBC): ███ (7)
DOL 0x800AC2C0 (ELF 0x80473CBC): ██ (5)
DOL 0x800AD2C0 (ELF 0x80474CBC): █████ (11)
DOL 0x800AE2C0 (ELF 0x80475CBC): █████ (12)
DOL 0x800AF2C0 (ELF 0x80476CBC): ███████ (16)
DOL 0x800B02C0 (ELF 0x80477CBC): ██████████████ (32)
DOL 0x800B12C0 (ELF 0x80478CBC): ███ (8)
DOL 0x800B22C0 (ELF 0x80479CBC): ██████ (15)
DOL 0x800B32C0 (ELF 0x8047ACBC): ███████████████ (33)
DOL 0x800B42C0 (ELF 0x8047BCBC): ███████ (17)
DOL 0x800B52C0 (ELF 0x8047CCBC): ███████████████ (34)
DOL 0x800B62C0 (ELF 0x8047DCBC): ████████████████████████████████████ (80)
DOL 0x800B72C0 (ELF 0x8047ECBC): ████████████████ (36)
DOL 0x800B82C0 (ELF 0x8047FCBC): ██████████ (22)
DOL 0x800B92C0 (ELF 0x80480CBC): █████ (13)
DOL 0x800BA2C0 (ELF 0x80481CBC): ███ (7)
DOL 0x800BB2C0 (ELF 0x80482CBC): █████ (12)
DOL 0x800BC2C0 (ELF 0x80483CBC):  (2)
DOL 0x800BD2C0 (ELF 0x80484CBC): █████ (11)
DOL 0x800BE2C0 (ELF 0x80485CBC): █████ (13)
DOL 0x800BF2C0 (ELF 0x80486CBC): █████ (13)
DOL 0x800C02C0 (ELF 0x80487CBC): ███████ (17)
DOL 0x800C12C0 (ELF 0x80488CBC): ███████ (16)
DOL 0x800C22C0 (ELF 0x80489CBC): █████████ (20)
DOL 0x800C32C0 (ELF 0x8048ACBC): ███ (7)
DOL 0x800C42C0 (ELF 0x8048BCBC): █ (4)
DOL 0x800C52C0 (ELF 0x8048CCBC): ███ (8)
DOL 0x800C62C0 (ELF 0x8048DCBC): ███ (7)
DOL 0x800C72C0 (ELF 0x8048ECBC): ████ (9)
DOL 0x800C82C0 (ELF 0x8048FCBC): █████ (12)
DOL 0x800C92C0 (ELF 0x80490CBC): █ (4)
DOL 0x800CA2C0 (ELF 0x80491CBC): █████ (13)
DOL 0x800CB2C0 (ELF 0x80492CBC): ██████ (14)
DOL 0x800CC2C0 (ELF 0x80493CBC): ████ (9)
DOL 0x800CD2C0 (ELF 0x80494CBC): ██████ (15)
DOL 0x800CE2C0 (ELF 0x80495CBC): ██████ (14)
DOL 0x800CF2C0 (ELF 0x80496CBC): █████████ (21)
DOL 0x800D02C0 (ELF 0x80497CBC): █████████ (21)
DOL 0x800D12C0 (ELF 0x80498CBC): █████ (11)
DOL 0x800D22C0 (ELF 0x80499CBC): ███ (7)
DOL 0x800D32C0 (ELF 0x8049ACBC): █████ (12)
DOL 0x800D42C0 (ELF 0x8049BCBC): ███ (8)
DOL 0x800D52C0 (ELF 0x8049CCBC): ██████████ (24)
DOL 0x800D62C0 (ELF 0x8049DCBC): █ (4)
DOL 0x800D72C0 (ELF 0x8049ECBC): ████ (10)
DOL 0x800D82C0 (ELF 0x8049FCBC): █ (4)
DOL 0x800D92C0 (ELF 0x804A0CBC): ██████ (15)
DOL 0x800DA2C0 (ELF 0x804A1CBC): ██████████ (24)
DOL 0x800DB2C0 (ELF 0x804A2CBC): ███ (8)
DOL 0x800DC2C0 (ELF 0x804A3CBC): ███ (7)
DOL 0x800DD2C0 (ELF 0x804A4CBC): █████ (12)
DOL 0x800DE2C0 (ELF 0x804A5CBC): █████ (13)
DOL 0x800DF2C0 (ELF 0x804A6CBC): ███████████████ (34)
DOL 0x800E02C0 (ELF 0x804A7CBC): █████████ (21)
DOL 0x800E12C0 (ELF 0x804A8CBC): ███████████ (25)
DOL 0x800E22C0 (ELF 0x804A9CBC): ██████████ (23)
DOL 0x800E32C0 (ELF 0x804AACBC): ███ (8)
DOL 0x800E42C0 (ELF 0x804ABCBC): ███ (8)
DOL 0x800E52C0 (ELF 0x804ACCBC): ███████████ (25)
DOL 0x800E62C0 (ELF 0x804ADCBC): █████████ (20)
DOL 0x800E72C0 (ELF 0x804AECBC): ███████ (17)
DOL 0x800E82C0 (ELF 0x804AFCBC): █ (3)
DOL 0x800E92C0 (ELF 0x804B0CBC): █████ (12)
DOL 0x800EA2C0 (ELF 0x804B1CBC): ████████ (19)
DOL 0x800EB2C0 (ELF 0x804B2CBC): █████ (12)
DOL 0x800EC2C0 (ELF 0x804B3CBC): ███████ (17)
DOL 0x800ED2C0 (ELF 0x804B4CBC): █████ (11)
DOL 0x800EE2C0 (ELF 0x804B5CBC): █████ (11)
DOL 0x800EF2C0 (ELF 0x804B6CBC): ████ (9)
DOL 0x800F02C0 (ELF 0x804B7CBC): █████ (12)
DOL 0x800F12C0 (ELF 0x804B8CBC): ████████████ (28)
DOL 0x800F22C0 (ELF 0x804B9CBC): ██████ (15)
DOL 0x800F32C0 (ELF 0x804BACBC): █████ (11)
DOL 0x800F42C0 (ELF 0x804BBCBC): ██████ (15)
DOL 0x800F52C0 (ELF 0x804BCCBC): ████ (9)
DOL 0x800F62C0 (ELF 0x804BDCBC): ██████ (15)
DOL 0x800F72C0 (ELF 0x804BECBC): █████████ (20)
DOL 0x800F82C0 (ELF 0x804BFCBC): ████████ (19)
DOL 0x800F92C0 (ELF 0x804C0CBC): █████████ (21)
DOL 0x800FA2C0 (ELF 0x804C1CBC): ██████ (15)
DOL 0x800FB2C0 (ELF 0x804C2CBC): ██ (5)
DOL 0x800FC2C0 (ELF 0x804C3CBC): ███████ (17)
DOL 0x800FD2C0 (ELF 0x804C4CBC): ███████ (17)
DOL 0x800FE2C0 (ELF 0x804C5CBC): ██████ (15)
DOL 0x800FF2C0 (ELF 0x804C6CBC): █████ (11)
DOL 0x801002C0 (ELF 0x804C7CBC): ████████ (19)
DOL 0x801012C0 (ELF 0x804C8CBC): █████ (13)
DOL 0x801022C0 (ELF 0x804C9CBC): █████ (12)
DOL 0x801032C0 (ELF 0x804CACBC): ███ (8)
DOL 0x801042C0 (ELF 0x804CBCBC): █████████ (20)
DOL 0x801052C0 (ELF 0x804CCCBC): █████████████ (29)
DOL 0x801062C0 (ELF 0x804CDCBC): ███████ (16)
DOL 0x801072C0 (ELF 0x804CECBC): ██ (6)
DOL 0x801082C0 (ELF 0x804CFCBC): ███████ (16)
DOL 0x801092C0 (ELF 0x804D0CBC): ███████████████ (34)
DOL 0x8010A2C0 (ELF 0x804D1CBC): ██████████ (24)
DOL 0x8010B2C0 (ELF 0x804D2CBC): ██████ (15)
DOL 0x8010C2C0 (ELF 0x804D3CBC): ███████ (17)
DOL 0x8010D2C0 (ELF 0x804D4CBC): ███████ (17)
DOL 0x8010E2C0 (ELF 0x804D5CBC): ██████████ (22)
DOL 0x8010F2C0 (ELF 0x804D6CBC): ████████ (19)
DOL 0x801102C0 (ELF 0x804D7CBC): █ (3)
DOL 0x801112C0 (ELF 0x804D8CBC): ██ (5)
DOL 0x801122C0 (ELF 0x804D9CBC): ████ (10)
DOL 0x801132C0 (ELF 0x804DACBC): ██ (5)
DOL 0x801142C0 (ELF 0x804DBCBC): ███ (8)
DOL 0x801152C0 (ELF 0x804DCCBC): ████ (9)
DOL 0x801162C0 (ELF 0x804DDCBC): ██████ (15)
DOL 0x801172C0 (ELF 0x804DECBC): ███████████ (26)
DOL 0x801182C0 (ELF 0x804DFCBC): ███████████ (25)
DOL 0x801192C0 (ELF 0x804E0CBC): █████ (12)
DOL 0x8011A2C0 (ELF 0x804E1CBC): ███████ (17)
DOL 0x8011B2C0 (ELF 0x804E2CBC): ██████████ (24)
DOL 0x8011C2C0 (ELF 0x804E3CBC): ██████ (14)
DOL 0x8011D2C0 (ELF 0x804E4CBC): ██████ (14)
DOL 0x8011E2C0 (ELF 0x804E5CBC): ████████ (19)
DOL 0x8011F2C0 (ELF 0x804E6CBC): ████ (9)
DOL 0x801202C0 (ELF 0x804E7CBC): █████████████████████ (47)
DOL 0x801212C0 (ELF 0x804E8CBC): ███ (8)
DOL 0x801222C0 (ELF 0x804E9CBC): ████ (9)
DOL 0x801232C0 (ELF 0x804EACBC): ██████ (14)
DOL 0x801242C0 (ELF 0x804EBCBC): ████ (9)
DOL 0x801252C0 (ELF 0x804ECCBC): ███████ (17)
DOL 0x801262C0 (ELF 0x804EDCBC): ███ (7)
DOL 0x801272C0 (ELF 0x804EECBC): █ (4)
DOL 0x801282C0 (ELF 0x804EFCBC):  (1)
DOL 0x8012B2C0 (ELF 0x804F2CBC):  (2)
DOL 0x8012C2C0 (ELF 0x804F3CBC):  (2)
DOL 0x8012D2C0 (ELF 0x804F4CBC): ███████ (17)
DOL 0x8012E2C0 (ELF 0x804F5CBC): █████████████ (30)
DOL 0x8012F2C0 (ELF 0x804F6CBC): ████████████████████████████████ (72)
DOL 0x801302C0 (ELF 0x804F7CBC): ██████ (14)
DOL 0x801312C0 (ELF 0x804F8CBC): ██████████ (24)
DOL 0x801322C0 (ELF 0x804F9CBC): ███████ (16)
DOL 0x801332C0 (ELF 0x804FACBC): ███████ (16)
DOL 0x801342C0 (ELF 0x804FBCBC): ████ (9)
DOL 0x801352C0 (ELF 0x804FCCBC): ██████████ (24)
DOL 0x801362C0 (ELF 0x804FDCBC): █████████ (20)
DOL 0x801372C0 (ELF 0x804FECBC): █████████████ (30)
DOL 0x801382C0 (ELF 0x804FFCBC): ████████████ (27)
DOL 0x801392C0 (ELF 0x80500CBC): █████ (12)
DOL 0x8013A2C0 (ELF 0x80501CBC): ███████ (17)
DOL 0x8013B2C0 (ELF 0x80502CBC): ████████ (19)
DOL 0x8013C2C0 (ELF 0x80503CBC): ██████ (14)
DOL 0x8013D2C0 (ELF 0x80504CBC): ██████████ (22)
DOL 0x8013E2C0 (ELF 0x80505CBC): ███ (7)
DOL 0x8013F2C0 (ELF 0x80506CBC): ██████ (14)
DOL 0x801402C0 (ELF 0x80507CBC): ████ (10)
DOL 0x801412C0 (ELF 0x80508CBC): ███ (8)
DOL 0x801422C0 (ELF 0x80509CBC): █████████ (20)
DOL 0x801432C0 (ELF 0x8050ACBC): ███████ (17)
DOL 0x801442C0 (ELF 0x8050BCBC): ████████ (18)
DOL 0x801452C0 (ELF 0x8050CCBC): ████ (9)
DOL 0x801462C0 (ELF 0x8050DCBC): ██████████ (23)
DOL 0x801472C0 (ELF 0x8050ECBC): █████ (13)
DOL 0x801482C0 (ELF 0x8050FCBC): ███████ (17)
DOL 0x801492C0 (ELF 0x80510CBC): ███ (8)
DOL 0x8014A2C0 (ELF 0x80511CBC): █████ (11)
DOL 0x8014B2C0 (ELF 0x80512CBC): ████████ (18)
DOL 0x8014C2C0 (ELF 0x80513CBC): ███ (7)
DOL 0x8014D2C0 (ELF 0x80514CBC): █████████ (21)
DOL 0x8014E2C0 (ELF 0x80515CBC): ████ (9)
DOL 0x8014F2C0 (ELF 0x80516CBC): █████ (12)
DOL 0x801502C0 (ELF 0x80517CBC): ██████████ (22)
DOL 0x801512C0 (ELF 0x80518CBC): ██████ (15)
DOL 0x801522C0 (ELF 0x80519CBC): ███████ (16)
DOL 0x801532C0 (ELF 0x8051ACBC): ███ (8)
DOL 0x801542C0 (ELF 0x8051BCBC): ████████ (18)
DOL 0x801552C0 (ELF 0x8051CCBC): ████ (10)
DOL 0x801562C0 (ELF 0x8051DCBC): █████ (13)
DOL 0x801572C0 (ELF 0x8051ECBC): █ (4)
DOL 0x801582C0 (ELF 0x8051FCBC): █████████████████ (38)
DOL 0x801592C0 (ELF 0x80520CBC): ██████ (14)
DOL 0x8015A2C0 (ELF 0x80521CBC): ██ (5)
DOL 0x8015B2C0 (ELF 0x80522CBC): ████████ (18)
DOL 0x8015C2C0 (ELF 0x80523CBC): ███ (7)
DOL 0x8015D2C0 (ELF 0x80524CBC): ████████ (19)
DOL 0x8015E2C0 (ELF 0x80525CBC): ██ (6)
DOL 0x8015F2C0 (ELF 0x80526CBC): ████ (10)
DOL 0x801602C0 (ELF 0x80527CBC): ████ (10)
DOL 0x801612C0 (ELF 0x80528CBC): ██████████ (24)
DOL 0x801622C0 (ELF 0x80529CBC): ███████ (17)
DOL 0x801632C0 (ELF 0x8052ACBC): █████ (12)
DOL 0x801642C0 (ELF 0x8052BCBC): ███████ (16)
DOL 0x801652C0 (ELF 0x8052CCBC): █ (4)
DOL 0x801682C0 (ELF 0x8052FCBC): ███████████████ (33)
DOL 0x801692C0 (ELF 0x80530CBC): ████████ (19)
DOL 0x8016A2C0 (ELF 0x80531CBC): ██████ (14)
DOL 0x8016B2C0 (ELF 0x80532CBC): █████████ (21)
DOL 0x8016C2C0 (ELF 0x80533CBC): ████████ (18)
DOL 0x8016D2C0 (ELF 0x80534CBC): █████ (13)
DOL 0x8016E2C0 (ELF 0x80535CBC): █████ (12)
DOL 0x8016F2C0 (ELF 0x80536CBC): ██████ (15)
DOL 0x801702C0 (ELF 0x80537CBC): █ (3)
DOL 0x801712C0 (ELF 0x80538CBC): █ (4)
DOL 0x801722C0 (ELF 0x80539CBC): ██ (6)
DOL 0x801732C0 (ELF 0x8053ACBC): ██████ (15)
DOL 0x801742C0 (ELF 0x8053BCBC): █ (3)
DOL 0x801752C0 (ELF 0x8053CCBC): ███████ (17)
DOL 0x801762C0 (ELF 0x8053DCBC): █████████ (20)
DOL 0x801772C0 (ELF 0x8053ECBC): █████ (11)
DOL 0x801782C0 (ELF 0x8053FCBC): █████████████████ (38)
DOL 0x801792C0 (ELF 0x80540CBC): █████ (12)
DOL 0x8017A2C0 (ELF 0x80541CBC): ██████ (14)
DOL 0x8017B2C0 (ELF 0x80542CBC): ██████ (15)
DOL 0x8017C2C0 (ELF 0x80543CBC): █████ (13)
DOL 0x8017D2C0 (ELF 0x80544CBC): ███ (7)
DOL 0x8017E2C0 (ELF 0x80545CBC): ███████████ (26)
DOL 0x8017F2C0 (ELF 0x80546CBC): ███ (7)
DOL 0x801802C0 (ELF 0x80547CBC): ████████ (18)
DOL 0x801812C0 (ELF 0x80548CBC): █████ (11)
DOL 0x801822C0 (ELF 0x80549CBC): ██████████ (23)
DOL 0x801832C0 (ELF 0x8054ACBC): ██████ (15)
DOL 0x801842C0 (ELF 0x8054BCBC): █████████ (20)
DOL 0x801852C0 (ELF 0x8054CCBC): ████ (10)
DOL 0x801862C0 (ELF 0x8054DCBC): ████ (9)
DOL 0x801872C0 (ELF 0x8054ECBC): ██████████ (23)
DOL 0x801882C0 (ELF 0x8054FCBC): ████████████ (28)
DOL 0x801892C0 (ELF 0x80550CBC): ██████ (15)
DOL 0x8018A2C0 (ELF 0x80551CBC): ███████ (16)
DOL 0x8018B2C0 (ELF 0x80552CBC): ██ (5)
DOL 0x8018C2C0 (ELF 0x80553CBC): ██████ (14)
DOL 0x8018D2C0 (ELF 0x80554CBC): ███████████ (25)
DOL 0x8018E2C0 (ELF 0x80555CBC): ██ (5)
DOL 0x8018F2C0 (ELF 0x80556CBC):  (2)
DOL 0x801902C0 (ELF 0x80557CBC): █████ (12)
DOL 0x801912C0 (ELF 0x80558CBC): █████ (11)
DOL 0x801922C0 (ELF 0x80559CBC): ████ (10)
DOL 0x801932C0 (ELF 0x8055ACBC): █████ (12)
DOL 0x801942C0 (ELF 0x8055BCBC): ██ (6)
DOL 0x801952C0 (ELF 0x8055CCBC): ██ (5)
DOL 0x801962C0 (ELF 0x8055DCBC): █████ (11)
DOL 0x801972C0 (ELF 0x8055ECBC): █████ (11)
DOL 0x801982C0 (ELF 0x8055FCBC): ██████████ (23)
DOL 0x801992C0 (ELF 0x80560CBC): ████████ (18)
DOL 0x8019A2C0 (ELF 0x80561CBC): ██████ (14)
DOL 0x8019B2C0 (ELF 0x80562CBC): ███████████ (26)
DOL 0x8019C2C0 (ELF 0x80563CBC): ███████████ (25)
DOL 0x8019D2C0 (ELF 0x80564CBC): ████████████ (27)
DOL 0x8019E2C0 (ELF 0x80565CBC): ████ (10)
DOL 0x8019F2C0 (ELF 0x80566CBC): ██████ (14)
DOL 0x801A02C0 (ELF 0x80567CBC): ████████████ (28)
DOL 0x801A12C0 (ELF 0x80568CBC): ███████████ (25)
DOL 0x801A22C0 (ELF 0x80569CBC): ███████████ (26)
DOL 0x801A32C0 (ELF 0x8056ACBC): █████ (13)
DOL 0x801A42C0 (ELF 0x8056BCBC): ███████ (16)
DOL 0x801A52C0 (ELF 0x8056CCBC): █████ (11)
DOL 0x801A62C0 (ELF 0x8056DCBC): ██████ (15)
DOL 0x801A72C0 (ELF 0x8056ECBC): █████ (12)
DOL 0x801A82C0 (ELF 0x8056FCBC): ████████ (19)
DOL 0x801A92C0 (ELF 0x80570CBC): ███████████ (25)
DOL 0x801AA2C0 (ELF 0x80571CBC): ██ (6)
DOL 0x801AB2C0 (ELF 0x80572CBC):  (1)
DOL 0x801AC2C0 (ELF 0x80573CBC): ████ (9)
DOL 0x801AD2C0 (ELF 0x80574CBC): ███ (7)
DOL 0x801AE2C0 (ELF 0x80575CBC): █████ (11)
DOL 0x801AF2C0 (ELF 0x80576CBC): ████████ (18)
DOL 0x801B02C0 (ELF 0x80577CBC): ██████ (15)
DOL 0x801B12C0 (ELF 0x80578CBC): ███ (8)
DOL 0x801B22C0 (ELF 0x80579CBC): █ (3)
DOL 0x801B32C0 (ELF 0x8057ACBC): ███ (8)
DOL 0x801B42C0 (ELF 0x8057BCBC): ███ (7)
DOL 0x801B52C0 (ELF 0x8057CCBC): ████████████ (27)
DOL 0x801B62C0 (ELF 0x8057DCBC): ███ (7)
DOL 0x801B92C0 (ELF 0x80580CBC):  (1)
DOL 0x801BB2C0 (ELF 0x80582CBC): █ (4)
DOL 0x801BC2C0 (ELF 0x80583CBC):  (2)
DOL 0x801BD2C0 (ELF 0x80584CBC): █ (4)
DOL 0x801BE2C0 (ELF 0x80585CBC): █ (4)
DOL 0x801BF2C0 (ELF 0x80586CBC): █████ (12)
DOL 0x801C02C0 (ELF 0x80587CBC):  (2)
DOL 0x801C12C0 (ELF 0x80588CBC):  (1)
DOL 0x801C22C0 (ELF 0x80589CBC): █ (4)
DOL 0x801C32C0 (ELF 0x8058ACBC): ██ (5)
DOL 0x801C42C0 (ELF 0x8058BCBC): ██ (5)
DOL 0x801C52C0 (ELF 0x8058CCBC): ██ (5)
DOL 0x801C62C0 (ELF 0x8058DCBC): █ (4)
DOL 0x801C72C0 (ELF 0x8058ECBC): ██ (5)
DOL 0x801C82C0 (ELF 0x8058FCBC): ██ (5)
DOL 0x801C92C0 (ELF 0x80590CBC): █████ (12)
DOL 0x801CA2C0 (ELF 0x80591CBC): ████████ (19)
DOL 0x801CB2C0 (ELF 0x80592CBC): ███████ (17)
DOL 0x801CC2C0 (ELF 0x80593CBC): ██████████ (23)
DOL 0x801CD2C0 (ELF 0x80594CBC): ████ (10)
DOL 0x801CE2C0 (ELF 0x80595CBC): ██████ (15)
DOL 0x801CF2C0 (ELF 0x80596CBC): ██████████ (23)
DOL 0x801D02C0 (ELF 0x80597CBC): ███████ (17)
DOL 0x801D12C0 (ELF 0x80598CBC): █████ (11)
DOL 0x801D22C0 (ELF 0x80599CBC): █████ (12)
DOL 0x801D32C0 (ELF 0x8059ACBC): █████ (13)
DOL 0x801D42C0 (ELF 0x8059BCBC): █████ (13)
DOL 0x801D52C0 (ELF 0x8059CCBC): ██ (5)
DOL 0x801D62C0 (ELF 0x8059DCBC): ████ (10)
DOL 0x801D72C0 (ELF 0x8059ECBC): ██ (6)
DOL 0x801D82C0 (ELF 0x8059FCBC): ███ (7)
DOL 0x801D92C0 (ELF 0x805A0CBC):  (1)
DOL 0x801DA2C0 (ELF 0x805A1CBC): ███ (8)
DOL 0x801DB2C0 (ELF 0x805A2CBC): █████ (13)
DOL 0x801DC2C0 (ELF 0x805A3CBC): ███ (8)
DOL 0x801DD2C0 (ELF 0x805A4CBC): ██████ (14)
DOL 0x801DE2C0 (ELF 0x805A5CBC): ██ (6)
DOL 0x801DF2C0 (ELF 0x805A6CBC): ██████ (14)
DOL 0x801E02C0 (ELF 0x805A7CBC): █████ (13)
DOL 0x801E12C0 (ELF 0x805A8CBC): █████ (13)
DOL 0x801E22C0 (ELF 0x805A9CBC): ██ (5)
DOL 0x801E32C0 (ELF 0x805AACBC): █████ (12)
DOL 0x801E42C0 (ELF 0x805ABCBC): ██████ (15)
DOL 0x801E52C0 (ELF 0x805ACCBC): ██████ (15)
DOL 0x801E62C0 (ELF 0x805ADCBC): ████ (10)
DOL 0x801E72C0 (ELF 0x805AECBC): █████ (13)
DOL 0x801E82C0 (ELF 0x805AFCBC): ███████ (17)
DOL 0x801E92C0 (ELF 0x805B0CBC): ███████ (16)
DOL 0x801EA2C0 (ELF 0x805B1CBC): ██ (6)
DOL 0x801EB2C0 (ELF 0x805B2CBC): █████ (11)
DOL 0x801EC2C0 (ELF 0x805B3CBC): █████ (11)
DOL 0x801ED2C0 (ELF 0x805B4CBC): █████ (11)
DOL 0x801EE2C0 (ELF 0x805B5CBC): ███████ (17)
DOL 0x801EF2C0 (ELF 0x805B6CBC): ████ (9)
DOL 0x801F02C0 (ELF 0x805B7CBC): ██ (6)
DOL 0x801F12C0 (ELF 0x805B8CBC): ██ (6)
DOL 0x801F22C0 (ELF 0x805B9CBC): ████ (9)
DOL 0x801F32C0 (ELF 0x805BACBC): █████ (13)
DOL 0x801F42C0 (ELF 0x805BBCBC): █ (4)
DOL 0x801F52C0 (ELF 0x805BCCBC): ███ (7)
DOL 0x801F62C0 (ELF 0x805BDCBC): █████ (11)
DOL 0x801F72C0 (ELF 0x805BECBC): ██████ (14)
DOL 0x801F82C0 (ELF 0x805BFCBC): ███ (7)
DOL 0x801F92C0 (ELF 0x805C0CBC): ██████ (14)
DOL 0x801FA2C0 (ELF 0x805C1CBC): █████ (13)
DOL 0x801FB2C0 (ELF 0x805C2CBC): ██████ (15)
DOL 0x801FC2C0 (ELF 0x805C3CBC): ███ (8)
DOL 0x801FD2C0 (ELF 0x805C4CBC): ███████ (16)
DOL 0x801FE2C0 (ELF 0x805C5CBC): █████ (13)
DOL 0x801FF2C0 (ELF 0x805C6CBC): ███ (7)
DOL 0x802002C0 (ELF 0x805C7CBC): ██ (6)
DOL 0x802012C0 (ELF 0x805C8CBC): ███ (8)
DOL 0x802022C0 (ELF 0x805C9CBC): █████ (12)
DOL 0x802032C0 (ELF 0x805CACBC): ████ (10)
DOL 0x802042C0 (ELF 0x805CBCBC): █████ (13)
DOL 0x802052C0 (ELF 0x805CCCBC): ████████ (19)
DOL 0x802062C0 (ELF 0x805CDCBC): ████ (9)
DOL 0x802072C0 (ELF 0x805CECBC): █████ (12)
DOL 0x802082C0 (ELF 0x805CFCBC): █████ (12)
DOL 0x802092C0 (ELF 0x805D0CBC): ██████ (15)
DOL 0x8020A2C0 (ELF 0x805D1CBC): █████ (12)
DOL 0x8020B2C0 (ELF 0x805D2CBC): ██ (6)
DOL 0x8020C2C0 (ELF 0x805D3CBC): ███████████ (26)
DOL 0x8020D2C0 (ELF 0x805D4CBC): ████ (10)
DOL 0x8020E2C0 (ELF 0x805D5CBC): █████████ (20)
DOL 0x8020F2C0 (ELF 0x805D6CBC): ██████ (15)
DOL 0x802102C0 (ELF 0x805D7CBC): █████ (11)
DOL 0x802112C0 (ELF 0x805D8CBC): █████ (13)
DOL 0x802122C0 (ELF 0x805D9CBC): ██████ (15)
DOL 0x802132C0 (ELF 0x805DACBC): █████ (11)
DOL 0x802142C0 (ELF 0x805DBCBC): ████ (10)
DOL 0x802152C0 (ELF 0x805DCCBC): █████ (12)
DOL 0x802162C0 (ELF 0x805DDCBC): █████ (12)
DOL 0x802172C0 (ELF 0x805DECBC): ███████ (16)
DOL 0x802182C0 (ELF 0x805DFCBC): █████ (13)
DOL 0x802192C0 (ELF 0x805E0CBC): ██████ (14)
DOL 0x8021A2C0 (ELF 0x805E1CBC): ████████ (19)
DOL 0x8021B2C0 (ELF 0x805E2CBC): ████ (9)
DOL 0x8021C2C0 (ELF 0x805E3CBC): ███ (8)
DOL 0x8021D2C0 (ELF 0x805E4CBC): █████ (11)
DOL 0x8021E2C0 (ELF 0x805E5CBC): ███████ (16)
DOL 0x8021F2C0 (ELF 0x805E6CBC): █████ (11)
DOL 0x802202C0 (ELF 0x805E7CBC): ████████ (18)
DOL 0x802212C0 (ELF 0x805E8CBC): ████████ (19)
DOL 0x802222C0 (ELF 0x805E9CBC): █████ (13)
DOL 0x802232C0 (ELF 0x805EACBC): ██ (5)
DOL 0x802242C0 (ELF 0x805EBCBC): █████ (13)
DOL 0x802252C0 (ELF 0x805ECCBC): ███████████ (25)
DOL 0x802262C0 (ELF 0x805EDCBC): ████████ (19)
DOL 0x802272C0 (ELF 0x805EECBC): ██████████ (22)
DOL 0x802282C0 (ELF 0x805EFCBC): ██████ (15)
DOL 0x802292C0 (ELF 0x805F0CBC): ████ (9)
DOL 0x8022A2C0 (ELF 0x805F1CBC): █████████ (20)
DOL 0x8022B2C0 (ELF 0x805F2CBC): ███████████ (26)
DOL 0x8022C2C0 (ELF 0x805F3CBC): █████████ (21)
DOL 0x8022D2C0 (ELF 0x805F4CBC): ██ (6)
DOL 0x8022E2C0 (ELF 0x805F5CBC): ███ (8)
DOL 0x8022F2C0 (ELF 0x805F6CBC): ███ (7)
DOL 0x802302C0 (ELF 0x805F7CBC): ██ (5)
DOL 0x802312C0 (ELF 0x805F8CBC): █ (4)
DOL 0x802322C0 (ELF 0x805F9CBC): ████ (10)
DOL 0x802332C0 (ELF 0x805FACBC): █ (3)
DOL 0x802342C0 (ELF 0x805FBCBC): ███████ (17)
DOL 0x802352C0 (ELF 0x805FCCBC): █████ (12)
DOL 0x802362C0 (ELF 0x805FDCBC): ████ (10)
DOL 0x802372C0 (ELF 0x805FECBC):  (2)
DOL 0x802382C0 (ELF 0x805FFCBC): ███████████████ (33)
DOL 0x802392C0 (ELF 0x80600CBC): ██████████ (24)
DOL 0x8023A2C0 (ELF 0x80601CBC): ██████████ (22)
DOL 0x8023B2C0 (ELF 0x80602CBC): ███████████████ (33)
DOL 0x8023C2C0 (ELF 0x80603CBC): ████████ (18)
DOL 0x802422C0 (ELF 0x80609CBC): █████ (13)
DOL 0x802432C0 (ELF 0x8060ACBC): █████ (11)
DOL 0x802442C0 (ELF 0x8060BCBC): ███ (8)
```

## 7. Large Coverage Gaps (>64KB in DOL address space)

No gaps > 64KB found.

## 8. Most-Referenced Addresses (Shared Across Files)

| ELF Address | DOL Address | Referenced In | Total Refs |
|-------------|-------------|---------------|------------|
| `0x8050BC00` | `0x80144204` | 8 files | 8 |
| `0x805565B0` | `0x8018EBB4` | 8 files | 9 |
| `0x80557D54` | `0x80190358` | 8 files | 8 |
| `0x80557DF8` | `0x801903FC` | 8 files | 8 |
| `0x805585FC` | `0x80190C00` | 8 files | 8 |
| `0x80558718` | `0x80190D1C` | 8 files | 8 |
| `0x805589A8` | `0x80190FAC` | 8 files | 8 |
| `0x80558AC4` | `0x801910C8` | 8 files | 8 |
| `0x80558C24` | `0x80191228` | 8 files | 8 |
| `0x80558CCC` | `0x801912D0` | 8 files | 8 |
| `0x80558D5C` | `0x80191360` | 8 files | 8 |
| `0x80558E64` | `0x80191468` | 8 files | 8 |
| `0x80559214` | `0x80191818` | 8 files | 8 |
| `0x8055946C` | `0x80191A70` | 8 files | 9 |
| `0x8055B180` | `0x80193784` | 8 files | 8 |

## 9. Conclusions

- **8,138 unique function addresses** annotated across **209 source files** in **11 modules**
- **94.1%** of all 21,637 annotations map to valid code sections (after applying ELF→DOL delta `0x003C79FC`)
- **1.38%** of DOL code space covered (8,138 unique addresses across 589,752 instruction words)
- **7,521 addresses** shared across multiple files (header/cpp declaration pairs, common utilities)
- **1,273 non-code references**: 591 data, 70 BSS, 612 out-of-range
- No significant coverage gaps detected
