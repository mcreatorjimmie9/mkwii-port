# Phase 14: Binary Symbol Cross-Validation Report

**Binary**: main.dol (2,749,248 bytes / 2.62 MB)
**Entry Point**: `0x800060A4`
**ELF→DOL Relocation Delta**: `0x003F8E30` (4,165,168 bytes)

> **Key Finding**: GENESIS `@addr` annotations use ELF virtual addresses (base ~0x80400000). The DOL loads code at 0x8000xxxx. A relocation delta of `0x003F8E30` is applied to map annotations to DOL sections.

## 1. DOL Binary Layout

### Text Sections (Code)

| Idx | DOL Address Range         | ELF Virtual Range          | Size           |
|-----|---------------------------|----------------------------|----------------|
| 0   | `0x80004000`–`0x8000645F` | `0x803FCE30`–`0x803FF28F` |      9,312 B (9.1 KB) |
| 1   | `0x800072C0`–`0x80244D3F` | `0x804000F0`–`0x8063DB6F` |  2,349,696 B (2294.6 KB) |
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
- ELF Virtual: `0x80698B30`–`0x8077DC2B`

## 2. Annotation Statistics

| Metric | Value |
|--------|-------|
| Total @addr annotations | **20,327** |
| Unique addresses | **7,273** |
| Source files with annotations | 162 |
| DOL code size | 2,359,008 bytes (2303.7 KB) |
| Address coverage | **1.23%** (7,273 addresses / 589,752 instructions) |
| Addresses shared across files | 7,100 |
| Max files sharing one address | 8 |
| ELF address range | `0x0000804C` – `0x80500B2A4` |

## 3. Address Classification (Relocated)

| Classification | Count | Percentage |
|----------------|-------|------------|
| ✅ code | 20,180 | 99.28% |
| 📋 data | 20 | 0.10% |
| 📝 bss | 70 | 0.34% |
| ⚠️ out_of_range | 57 | 0.28% |

> **Validation result**: 99.28% of annotations point to valid code sections. 20 point to data, 70 to BSS, and 57 are out of range.

## 4. Non-Code Annotations

> ℹ️ **147 annotation(s)** do not point to code sections. These may reference data symbols, vtables, BSS variables, or be incorrect.

### DATA References (20 annotations)

| ELF Address | DOL Address | File | Line |
|-------------|-------------|------|------|
| `0x80647C28` | `0x8024EDF8` | UI/UIControl.hpp | 49 |
| `0x80647E6C` | `0x8024F03C` | UI/UIControl.hpp | 52 |
| `0x80647DB0` | `0x8024EF80` | UI/UIControl.hpp | 55 |
| `0x80647B98` | `0x8024ED68` | UI/UIControl.hpp | 90 |
| `0x806491A8` | `0x80250378` | UI/UIControl.hpp | 93 |
| `0x80649500` | `0x802506D0` | UI/UIControl.hpp | 149 |
| `0x80649644` | `0x80250814` | UI/UIControl.hpp | 151 |
| `0x80647C28` | `0x8024EDF8` | UI/UIControl.cpp | 89 |
| `0x80647E6C` | `0x8024F03C` | UI/UIControl.cpp | 98 |
| `0x80647DB0` | `0x8024EF80` | UI/UIControl.cpp | 112 |
| `0x80647B98` | `0x8024ED68` | UI/UIControl.cpp | 144 |
| `0x806491A8` | `0x80250378` | UI/UIControl.cpp | 157 |
| `0x80649500` | `0x802506D0` | UI/UIControl.cpp | 232 |
| `0x80649644` | `0x80250814` | UI/UIControl.cpp | 268 |
| `0x80660224` | `0x802673F4` | ItemSystem/ITEMHandler.cpp | 10 |
| `0x8065E5D4` | `0x802657A4` | ItemSystem/ITEMHandler.cpp | 482 |
| `0x8065E890` | `0x80265A60` | ItemSystem/ITEMHandler.cpp | 912 |
| `0x8065EAD0` | `0x80265CA0` | ItemSystem/ITEMHandler.cpp | 1236 |
| `0x8065FA50` | `0x80266C20` | ItemSystem/ITEMHandler.cpp | 1419 |
| `0x8065F704` | `0x802668D4` | ItemSystem/ITEMHandler.cpp | 1560 |

### BSS References (70 annotations)

| ELF Address | DOL Address | File | Line |
|-------------|-------------|------|------|
| `0x8071E858` | `0x80325A28` | UI/UIManager.hpp | 55 |
| `0x8071E50C` | `0x803256DC` | UI/UIManager.hpp | 60 |
| `0x8071DDE4` | `0x80324FB4` | UI/UIManager.hpp | 62 |
| `0x8071E06C` | `0x8032523C` | UI/UIManager.hpp | 130 |
| `0x8071E50C` | `0x803256DC` | UI/UIManager.cpp | 118 |
| `0x8071DDE4` | `0x80324FB4` | UI/UIManager.cpp | 155 |
| `0x8071E06C` | `0x8032523C` | UI/UIManager.cpp | 284 |
| `0x8071DDE4` | `0x80324FB4` | UI/SectionDirector.hpp | 57 |
| `0x8071E06C` | `0x8032523C` | UI/SectionDirector.hpp | 60 |
| `0x8071E188` | `0x80325358` | UI/SectionDirector.hpp | 63 |
| `0x8071E50C` | `0x803256DC` | UI/SectionDirector.hpp | 66 |
| `0x8071E624` | `0x803257F4` | UI/SectionDirector.hpp | 69 |
| `0x8071E758` | `0x80325928` | UI/SectionDirector.hpp | 72 |
| `0x8071E7F8` | `0x803259C8` | UI/SectionDirector.hpp | 75 |
| `0x8071E858` | `0x80325A28` | UI/SectionDirector.hpp | 78 |
| `0x8071E25C` | `0x8032542C` | UI/SectionDirector.hpp | 88 |
| `0x8071E38C` | `0x8032555C` | UI/SectionDirector.hpp | 90 |
| `0x8070F680` | `0x80316850` | UI/SectionDirector.hpp | 148 |
| `0x8071DDE4` | `0x80324FB4` | UI/SectionDirector.cpp | 54 |
| `0x8071E06C` | `0x8032523C` | UI/SectionDirector.cpp | 123 |
| `0x8071E188` | `0x80325358` | UI/SectionDirector.cpp | 142 |
| `0x8071E50C` | `0x803256DC` | UI/SectionDirector.cpp | 152 |
| `0x8071E624` | `0x803257F4` | UI/SectionDirector.cpp | 174 |
| `0x8071E758` | `0x80325928` | UI/SectionDirector.cpp | 207 |
| `0x8071E7F8` | `0x803259C8` | UI/SectionDirector.cpp | 232 |
| `0x8071E858` | `0x80325A28` | UI/SectionDirector.cpp | 242 |
| `0x8071E25C` | `0x8032542C` | UI/SectionDirector.cpp | 252 |
| `0x8071E38C` | `0x8032555C` | UI/SectionDirector.cpp | 272 |
| `0x8070F680` | `0x80316850` | UI/SectionDirector.cpp | 308 |
| `0x8072000C` | `0x803271DC` | AudioEngine/SoundArchive.cpp | 15 |
| `0x8072015C` | `0x8032732C` | AudioEngine/SoundArchive.cpp | 98 |
| `0x80720700` | `0x803278D0` | AudioEngine/SoundArchive.cpp | 140 |
| `0x80720900` | `0x80327AD0` | AudioEngine/SoundArchive.cpp | 158 |
| `0x80720C00` | `0x80327DD0` | AudioEngine/SoundArchive.cpp | 180 |
| `0x80720F00` | `0x803280D0` | AudioEngine/SoundArchive.cpp | 202 |
| `0x80721200` | `0x803283D0` | AudioEngine/SoundArchive.cpp | 214 |
| `0x80721500` | `0x803286D0` | AudioEngine/SoundArchive.cpp | 227 |
| `0x80721700` | `0x803288D0` | AudioEngine/SoundArchive.cpp | 235 |
| `0x80721900` | `0x80328AD0` | AudioEngine/SoundArchive.cpp | 243 |
| `0x80721C00` | `0x80328DD0` | AudioEngine/SoundArchive.cpp | 257 |
| `0x80722400` | `0x803295D0` | AudioEngine/SoundArchive.cpp | 266 |
| `0x80722700` | `0x803298D0` | AudioEngine/SoundArchive.cpp | 277 |
| `0x80722A00` | `0x80329BD0` | AudioEngine/SoundArchive.cpp | 286 |
| `0x80722D00` | `0x80329ED0` | AudioEngine/SoundArchive.cpp | 295 |
| `0x80722E14` | `0x80329FE4` | AudioEngine/SoundArchive.cpp | 304 |
| `0x80723100` | `0x8032A2D0` | AudioEngine/SoundArchive.cpp | 313 |
| `0x80723400` | `0x8032A5D0` | AudioEngine/SoundArchive.cpp | 321 |
| `0x80723700` | `0x8032A8D0` | AudioEngine/SoundArchive.cpp | 329 |
| `0x80723A00` | `0x8032ABD0` | AudioEngine/SoundArchive.cpp | 337 |
| `0x80721F68` | `0x80329138` | AudioEngine/SoundArchive.cpp | 346 |
| ... and 20 more | | | |

### OUT_OF_RANGE References (57 annotations)

| ELF Address | DOL Address | File | Line |
|-------------|-------------|------|------|
| `0x80799E10` | `0x803A0FE0` | ItemSystem/ItemHolderPlayer.cpp | 9 |
| `0x807AA69C` | `0x803B186C` | ItemSystem/ItemHolderPlayer.cpp | 1061 |
| `0x80799BC8` | `0x803A0D98` | ItemSystem/ItemHolderPlayer.cpp | 1312 |
| `0x8079BA04` | `0x803A2BD4` | ItemSystem/ItemHolderPlayer.cpp | 1573 |
| `0x807BA064` | `0x803C1234` | ItemSystem/ItemHolderPlayer.cpp | 1688 |
| `0x807BC864` | `0x803C3A34` | ItemSystem/ItemRoulette.cpp | 9 |
| `0x807A9D90` | `0x803B0F60` | ItemSystem/ItemObjFib.cpp | 9 |
| `0x807AC4D8` | `0x803B36A8` | ItemSystem/ItemObjRed.cpp | 9 |
| `0x807BD914` | `0x803C4AE4` | ItemSystem/ItemSlotData.cpp | 9 |
| `0x807BD208` | `0x803C43D8` | ItemSystem/ItemSlotData.cpp | 187 |
| `0x807BD868` | `0x803C4A38` | ItemSystem/ItemSlotData.cpp | 457 |
| `0x807BDED4` | `0x803C50A4` | ItemSystem/ItemSlotData.cpp | 493 |
| `0x8079B7C0` | `0x803A2990` | ItemSystem/ItemHolder.cpp | 9 |
| `0x8079C194` | `0x803A3364` | ItemSystem/ItemHolder.cpp | 202 |
| `0x8079B484` | `0x803A2654` | ItemSystem/ItemHolder.cpp | 477 |
| `0x8079C614` | `0x803A37E4` | ItemSystem/ItemHolder.cpp | 722 |
| `0x8079BD38` | `0x803A2F08` | ItemSystem/ItemHolder.cpp | 746 |
| `0x8079C780` | `0x803A3950` | ItemSystem/ItemHolder.cpp | 966 |
| `0x8079BC7C` | `0x803A2E4C` | ItemSystem/ItemHolder.cpp | 1183 |
| `0x807A14D4` | `0x803A86A4` | ItemSystem/ItemObj.cpp | 9 |
| `0x807A2868` | `0x803A9A38` | ItemSystem/ItemObj.cpp | 65 |
| `0x807A39BC` | `0x803AAB8C` | ItemSystem/ItemObj.cpp | 415 |
| `0x807A070C` | `0x803A78DC` | ItemSystem/ItemObj.cpp | 667 |
| `0x807A0A38` | `0x803A7C08` | ItemSystem/ItemObj.cpp | 811 |
| `0x80798958` | `0x8039FB28` | ItemSystem/ItemHolderItem.cpp | 9 |
| `0x80798450` | `0x8039F620` | ItemSystem/ItemHolderItem.cpp | 33 |
| `0x807982EC` | `0x8039F4BC` | ItemSystem/ItemHolderItem.cpp | 390 |
| `0x807981B4` | `0x8039F384` | ItemSystem/ItemHolderItem.cpp | 613 |
| `0x807B6A98` | `0x803BDC68` | ItemSystem/ItemObjBlue.cpp | 9 |
| `0x807ADEC8` | `0x803B5098` | ItemSystem/ItemObjBlue.cpp | 485 |
| `0x807AE4F0` | `0x803B56C0` | ItemSystem/ItemObjBlue.cpp | 518 |
| `0x807A762C` | `0x803AE7FC` | ItemSystem/ItemObjBomb.cpp | 9 |
| `0x807A66AC` | `0x803AD87C` | ItemSystem/ItemObjBomb.cpp | 319 |
| `0x80792FE4` | `0x8039A1B4` | ItemSystem/Global.cpp | 9 |
| `0x80793364` | `0x8039A534` | ItemSystem/Global.cpp | 362 |
| `0x807966D8` | `0x8039D8A8` | ItemSystem/ItemHolderPlayerb4.cpp | 9 |
| `0x80793DF8` | `0x8039AFC8` | ItemSystem/ItemHolderPlayerb4.cpp | 470 |
| `0x807FA154` | `0x80401324` | RaceEngine/CtrlRaceTime.hpp | 18 |
| `0x807FA3A8` | `0x80401578` | RaceEngine/CtrlRaceTime.hpp | 20 |
| `0x807FA9A8` | `0x80401B78` | RaceEngine/CtrlRaceTime.hpp | 22 |
| `0x807F1DB8` | `0x803F8F88` | RaceEngine/CtrlRaceTime.hpp | 36 |
| `0x80857BCC` | `0x8045ED9C` | RaceEngine/TimeAttackSplitsPage.hpp | 17 |
| `0x80857BCC` | `0x8045ED9C` | RaceEngine/TimeAttackSplitsPage.cpp | 9 |
| `0x807FA154` | `0x80401324` | RaceEngine/CtrlRaceTime.cpp | 8 |
| `0x807FA3A8` | `0x80401578` | RaceEngine/CtrlRaceTime.cpp | 22 |
| `0x807FA9A8` | `0x80401B78` | RaceEngine/CtrlRaceTime.cpp | 36 |
| `0x807F1DB8` | `0x803F8F88` | RaceEngine/CtrlRaceTime.cpp | 53 |
| `0x0804F590` | `0x07C56760` | Runtime/ArchiveExt_Classes.cpp | 1634 |
| `0x00092D50` | `0x-03660E0` | Runtime/AudioEngine_Classes.cpp | 913 |
| `0x0000804C` | `0x-03F0DE4` | Runtime/Archive_Classes.cpp | 65 |
| ... and 7 more | | | |

## 5. Per-Module Breakdown

| Module | Files | Unique Addrs | Annotations | Code | Data | BSS | OOR |
|--------|-------|-------------|-------------|------|------|-----|-----|
| AudioEngine          |  20 |   181 |    335 |   294 |    0 |  41 |   0 |
| ItemSystem           |  15 |    48 |     48 |     5 |    6 |   0 |  37 |
| Network              |  10 |   151 |    334 |   334 |    0 |   0 |   0 |
| RaceEngine           |  19 |    50 |    100 |    90 |    0 |   0 |  10 |
| Rendering            |  12 |    95 |     96 |    96 |    0 |   0 |   0 |
| Runtime              |  64 |  6919 |  19234 | 19224 |    0 |   0 |  10 |
| UI                   |  22 |    78 |    180 |   137 |   14 |  29 |   0 |

## 6. Code Coverage Density Map (4KB bins)

Distribution of unique addresses across 4KB bins in DOL text[1]:

```
DOL 0x800072C0 (ELF 0x804000F0): ████████ (14)
DOL 0x800082C0 (ELF 0x804010F0): ████ (7)
DOL 0x800092C0 (ELF 0x804020F0): ██████ (11)
DOL 0x8000A2C0 (ELF 0x804030F0): ███████ (13)
DOL 0x8000B2C0 (ELF 0x804040F0): ████████ (15)
DOL 0x8000C2C0 (ELF 0x804050F0): ███████ (12)
DOL 0x8000D2C0 (ELF 0x804060F0): ████ (8)
DOL 0x8000E2C0 (ELF 0x804070F0): █████ (9)
DOL 0x8000F2C0 (ELF 0x804080F0): ███████████ (20)
DOL 0x800102C0 (ELF 0x804090F0): ████████████ (21)
DOL 0x800112C0 (ELF 0x8040A0F0): ███████ (12)
DOL 0x800122C0 (ELF 0x8040B0F0): █████████ (16)
DOL 0x800132C0 (ELF 0x8040C0F0): ████████ (15)
DOL 0x800142C0 (ELF 0x8040D0F0): ████████ (14)
DOL 0x800152C0 (ELF 0x8040E0F0): ████████████ (21)
DOL 0x800162C0 (ELF 0x8040F0F0): ██ (5)
DOL 0x800172C0 (ELF 0x804100F0): ███████ (12)
DOL 0x800182C0 (ELF 0x804110F0): ███████████ (19)
DOL 0x800192C0 (ELF 0x804120F0): ██████████ (18)
DOL 0x8001A2C0 (ELF 0x804130F0): ███████████ (19)
DOL 0x8001B2C0 (ELF 0x804140F0): ██████████████ (25)
DOL 0x8001C2C0 (ELF 0x804150F0): ██████████ (17)
DOL 0x8001D2C0 (ELF 0x804160F0): ███████ (13)
DOL 0x8001E2C0 (ELF 0x804170F0): ███████ (13)
DOL 0x8001F2C0 (ELF 0x804180F0): ████ (7)
DOL 0x800202C0 (ELF 0x804190F0): ██████████████████████ (38)
DOL 0x800212C0 (ELF 0x8041A0F0): ██████████ (18)
DOL 0x800222C0 (ELF 0x8041B0F0): ███████████ (19)
DOL 0x800232C0 (ELF 0x8041C0F0): ██████████ (17)
DOL 0x800242C0 (ELF 0x8041D0F0): █████████ (16)
DOL 0x800252C0 (ELF 0x8041E0F0): ██████ (11)
DOL 0x800262C0 (ELF 0x8041F0F0): ████ (8)
DOL 0x800272C0 (ELF 0x804200F0): ████ (7)
DOL 0x800282C0 (ELF 0x804210F0): ████████████ (22)
DOL 0x800292C0 (ELF 0x804220F0): ██████ (11)
DOL 0x8002A2C0 (ELF 0x804230F0): ███████ (12)
DOL 0x8002B2C0 (ELF 0x804240F0): ████ (8)
DOL 0x8002C2C0 (ELF 0x804250F0): █████ (9)
DOL 0x8002D2C0 (ELF 0x804260F0): ███████████ (19)
DOL 0x8002E2C0 (ELF 0x804270F0): ███████ (12)
DOL 0x8002F2C0 (ELF 0x804280F0): ███████ (12)
DOL 0x800302C0 (ELF 0x804290F0): ████████████ (21)
DOL 0x800312C0 (ELF 0x8042A0F0): █████████ (16)
DOL 0x800322C0 (ELF 0x8042B0F0):  (1)
DOL 0x800332C0 (ELF 0x8042C0F0): █████ (9)
DOL 0x800342C0 (ELF 0x8042D0F0): █████ (10)
DOL 0x800352C0 (ELF 0x8042E0F0): ████████ (14)
DOL 0x800362C0 (ELF 0x8042F0F0): ████████ (14)
DOL 0x800372C0 (ELF 0x804300F0): █████████████ (23)
DOL 0x800382C0 (ELF 0x804310F0): ██████████ (17)
DOL 0x800392C0 (ELF 0x804320F0): ██████████ (18)
DOL 0x8003A2C0 (ELF 0x804330F0): █████ (10)
DOL 0x8003B2C0 (ELF 0x804340F0): █ (3)
DOL 0x8003C2C0 (ELF 0x804350F0): ████████████████████████ (42)
DOL 0x8003D2C0 (ELF 0x804360F0): ██████████████████████████████████████████████████ (85)
DOL 0x8003E2C0 (ELF 0x804370F0): ██████ (11)
DOL 0x8003F2C0 (ELF 0x804380F0): ██████████ (18)
DOL 0x800402C0 (ELF 0x804390F0): ██████████ (17)
DOL 0x800412C0 (ELF 0x8043A0F0): ████████ (15)
DOL 0x800422C0 (ELF 0x8043B0F0): ███████ (13)
DOL 0x800432C0 (ELF 0x8043C0F0): ███████ (13)
DOL 0x800442C0 (ELF 0x8043D0F0): █████ (9)
DOL 0x800452C0 (ELF 0x8043E0F0): █████████████ (23)
DOL 0x800462C0 (ELF 0x8043F0F0): █████████ (16)
DOL 0x800472C0 (ELF 0x804400F0): █████████████ (23)
DOL 0x800482C0 (ELF 0x804410F0): ████████ (15)
DOL 0x800492C0 (ELF 0x804420F0): ███████ (12)
DOL 0x8004A2C0 (ELF 0x804430F0): █████████████ (23)
DOL 0x8004B2C0 (ELF 0x804440F0): ██████ (11)
DOL 0x8004C2C0 (ELF 0x804450F0): ████ (7)
DOL 0x8004D2C0 (ELF 0x804460F0): ███████ (12)
DOL 0x8004E2C0 (ELF 0x804470F0): ██████████ (17)
DOL 0x8004F2C0 (ELF 0x804480F0): ██████████ (17)
DOL 0x800502C0 (ELF 0x804490F0): █████████ (16)
DOL 0x800512C0 (ELF 0x8044A0F0): ███████████ (19)
DOL 0x800522C0 (ELF 0x8044B0F0): ██████████ (18)
DOL 0x800532C0 (ELF 0x8044C0F0): ███████████ (19)
DOL 0x800542C0 (ELF 0x8044D0F0): ████████ (14)
DOL 0x800552C0 (ELF 0x8044E0F0): ████ (7)
DOL 0x800562C0 (ELF 0x8044F0F0): ██████████████ (25)
DOL 0x800572C0 (ELF 0x804500F0): ██████ (11)
DOL 0x800582C0 (ELF 0x804510F0): █████████████ (23)
DOL 0x800592C0 (ELF 0x804520F0): ███████ (12)
DOL 0x8005A2C0 (ELF 0x804530F0): ███████████████ (26)
DOL 0x8005B2C0 (ELF 0x804540F0): █████████████ (23)
DOL 0x8005C2C0 (ELF 0x804550F0): ████████████████ (28)
DOL 0x8005D2C0 (ELF 0x804560F0): ███████████████ (26)
DOL 0x8005E2C0 (ELF 0x804570F0): ██████████ (17)
DOL 0x8005F2C0 (ELF 0x804580F0): █████████ (16)
DOL 0x800602C0 (ELF 0x804590F0): ████████████ (21)
DOL 0x800612C0 (ELF 0x8045A0F0): ████████ (15)
DOL 0x800622C0 (ELF 0x8045B0F0): ███████████████ (26)
DOL 0x800632C0 (ELF 0x8045C0F0): ██████████ (17)
DOL 0x800642C0 (ELF 0x8045D0F0): ████████████ (21)
DOL 0x800652C0 (ELF 0x8045E0F0): ████ (7)
DOL 0x800662C0 (ELF 0x8045F0F0): █ (2)
DOL 0x800672C0 (ELF 0x804600F0): █████ (10)
DOL 0x800682C0 (ELF 0x804610F0): ██ (5)
DOL 0x800692C0 (ELF 0x804620F0): ██████████ (17)
DOL 0x8006A2C0 (ELF 0x804630F0): ████████████ (22)
DOL 0x8006B2C0 (ELF 0x804640F0): ███████████ (19)
DOL 0x8006C2C0 (ELF 0x804650F0): ██████████ (17)
DOL 0x8006D2C0 (ELF 0x804660F0):  (1)
DOL 0x8006E2C0 (ELF 0x804670F0): ████ (8)
DOL 0x8006F2C0 (ELF 0x804680F0): ████ (7)
DOL 0x800702C0 (ELF 0x804690F0): ██ (4)
DOL 0x800712C0 (ELF 0x8046A0F0): ██ (5)
DOL 0x800722C0 (ELF 0x8046B0F0): █████ (9)
DOL 0x800732C0 (ELF 0x8046C0F0): ███████ (12)
DOL 0x800742C0 (ELF 0x8046D0F0): ███████ (12)
DOL 0x800752C0 (ELF 0x8046E0F0): █████████ (16)
DOL 0x800762C0 (ELF 0x8046F0F0): ███████ (13)
DOL 0x800772C0 (ELF 0x804700F0): █████ (9)
DOL 0x800782C0 (ELF 0x804710F0): ████ (7)
DOL 0x800792C0 (ELF 0x804720F0): ███ (6)
DOL 0x8007A2C0 (ELF 0x804730F0): ████ (7)
DOL 0x8007B2C0 (ELF 0x804740F0): ███ (6)
DOL 0x8007C2C0 (ELF 0x804750F0): █████ (10)
DOL 0x8007D2C0 (ELF 0x804760F0): █████████████ (23)
DOL 0x8007E2C0 (ELF 0x804770F0): ████ (8)
DOL 0x8007F2C0 (ELF 0x804780F0): █████████████████ (29)
DOL 0x800802C0 (ELF 0x804790F0): ███████ (12)
DOL 0x800812C0 (ELF 0x8047A0F0): ██████████ (17)
DOL 0x800822C0 (ELF 0x8047B0F0): ██████████████████ (31)
DOL 0x800832C0 (ELF 0x8047C0F0): ██████████ (18)
DOL 0x800842C0 (ELF 0x8047D0F0): ███████████████████████████ (47)
DOL 0x800852C0 (ELF 0x8047E0F0): █████████████████████████████████████████████ (78)
DOL 0x800862C0 (ELF 0x8047F0F0): ████████████████ (28)
DOL 0x800872C0 (ELF 0x804800F0): ██████████ (17)
DOL 0x800882C0 (ELF 0x804810F0): ████████ (14)
DOL 0x800892C0 (ELF 0x804820F0): █ (2)
DOL 0x8008A2C0 (ELF 0x804830F0): ███████ (13)
DOL 0x8008B2C0 (ELF 0x804840F0): █ (2)
DOL 0x8008C2C0 (ELF 0x804850F0): ███████ (12)
DOL 0x8008D2C0 (ELF 0x804860F0): █████████ (16)
DOL 0x8008E2C0 (ELF 0x804870F0): █████ (9)
DOL 0x8008F2C0 (ELF 0x804880F0): ██████████████ (25)
DOL 0x800902C0 (ELF 0x804890F0): █████ (10)
DOL 0x800912C0 (ELF 0x8048A0F0): ████████████ (21)
DOL 0x800922C0 (ELF 0x8048B0F0): ██ (5)
DOL 0x800932C0 (ELF 0x8048C0F0): █ (3)
DOL 0x800942C0 (ELF 0x8048D0F0): ███████ (12)
DOL 0x800952C0 (ELF 0x8048E0F0): ██ (4)
DOL 0x800962C0 (ELF 0x8048F0F0): ███████ (12)
DOL 0x800972C0 (ELF 0x804900F0): ████ (7)
DOL 0x800982C0 (ELF 0x804910F0): █████ (9)
DOL 0x800992C0 (ELF 0x804920F0): ███████ (13)
DOL 0x8009A2C0 (ELF 0x804930F0): ███████ (12)
DOL 0x8009B2C0 (ELF 0x804940F0): █████ (9)
DOL 0x8009C2C0 (ELF 0x804950F0): ████████ (15)
DOL 0x8009D2C0 (ELF 0x804960F0): ████████████ (21)
DOL 0x8009E2C0 (ELF 0x804970F0): ███████████ (19)
DOL 0x8009F2C0 (ELF 0x804980F0): ███████████ (19)
DOL 0x800A02C0 (ELF 0x804990F0): ███ (6)
DOL 0x800A12C0 (ELF 0x8049A0F0): █████ (10)
DOL 0x800A22C0 (ELF 0x8049B0F0): ████ (8)
DOL 0x800A32C0 (ELF 0x8049C0F0): ██████ (11)
DOL 0x800A42C0 (ELF 0x8049D0F0): ██████████████ (24)
DOL 0x800A52C0 (ELF 0x8049E0F0): ██ (4)
DOL 0x800A62C0 (ELF 0x8049F0F0): █████ (9)
DOL 0x800A72C0 (ELF 0x804A00F0): █ (2)
DOL 0x800A82C0 (ELF 0x804A10F0): ██████████████ (24)
DOL 0x800A92C0 (ELF 0x804A20F0): ████████████ (21)
DOL 0x800AA2C0 (ELF 0x804A30F0): ██ (4)
DOL 0x800AB2C0 (ELF 0x804A40F0): ████ (7)
DOL 0x800AC2C0 (ELF 0x804A50F0): ████████ (14)
DOL 0x800AD2C0 (ELF 0x804A60F0): ████████ (15)
DOL 0x800AE2C0 (ELF 0x804A70F0): ████████████████████ (34)
DOL 0x800AF2C0 (ELF 0x804A80F0): ███████████████ (26)
DOL 0x800B02C0 (ELF 0x804A90F0): ████████████ (22)
DOL 0x800B12C0 (ELF 0x804AA0F0): █████████ (16)
DOL 0x800B22C0 (ELF 0x804AB0F0): █████ (9)
DOL 0x800B32C0 (ELF 0x804AC0F0): █████ (9)
DOL 0x800B42C0 (ELF 0x804AD0F0): ████████████████ (28)
DOL 0x800B52C0 (ELF 0x804AE0F0): ████████████ (22)
DOL 0x800B62C0 (ELF 0x804AF0F0): █████ (9)
DOL 0x800B72C0 (ELF 0x804B00F0): ████ (7)
DOL 0x800B82C0 (ELF 0x804B10F0): █████ (9)
DOL 0x800B92C0 (ELF 0x804B20F0): ███████████ (20)
DOL 0x800BA2C0 (ELF 0x804B30F0): ███████ (13)
DOL 0x800BB2C0 (ELF 0x804B40F0): █████████████ (23)
DOL 0x800BC2C0 (ELF 0x804B50F0): █ (2)
DOL 0x800BD2C0 (ELF 0x804B60F0): ███████ (12)
DOL 0x800BE2C0 (ELF 0x804B70F0): ████ (8)
DOL 0x800BF2C0 (ELF 0x804B80F0): ████████████ (22)
DOL 0x800C02C0 (ELF 0x804B90F0): ███████████ (20)
DOL 0x800C12C0 (ELF 0x804BA0F0): ████████ (15)
DOL 0x800C22C0 (ELF 0x804BB0F0): ███████ (12)
DOL 0x800C32C0 (ELF 0x804BC0F0): ████████ (14)
DOL 0x800C42C0 (ELF 0x804BD0F0): ██████ (11)
DOL 0x800C52C0 (ELF 0x804BE0F0): ████████████ (21)
DOL 0x800C62C0 (ELF 0x804BF0F0): ███████ (12)
DOL 0x800C72C0 (ELF 0x804C00F0): ████████████ (22)
DOL 0x800C82C0 (ELF 0x804C10F0): ███████████ (19)
DOL 0x800C92C0 (ELF 0x804C20F0): ███████ (12)
DOL 0x800CA2C0 (ELF 0x804C30F0): ████ (7)
DOL 0x800CB2C0 (ELF 0x804C40F0): ███████████ (20)
DOL 0x800CC2C0 (ELF 0x804C50F0): ███████████ (19)
DOL 0x800CD2C0 (ELF 0x804C60F0): ██████ (11)
DOL 0x800CE2C0 (ELF 0x804C70F0): ████████ (15)
DOL 0x800CF2C0 (ELF 0x804C80F0): ████████ (15)
DOL 0x800D02C0 (ELF 0x804C90F0): ███████ (13)
DOL 0x800D12C0 (ELF 0x804CA0F0): █████ (9)
DOL 0x800D22C0 (ELF 0x804CB0F0): █████ (9)
DOL 0x800D32C0 (ELF 0x804CC0F0): █████████████████ (29)
DOL 0x800D42C0 (ELF 0x804CD0F0): ███████████████ (27)
DOL 0x800D52C0 (ELF 0x804CE0F0): ████████ (14)
DOL 0x800D72C0 (ELF 0x804D00F0): ██████████████ (25)
DOL 0x800D82C0 (ELF 0x804D10F0): ██████████████████ (31)
DOL 0x800D92C0 (ELF 0x804D20F0): █████████████ (23)
DOL 0x800DA2C0 (ELF 0x804D30F0): ████████ (14)
DOL 0x800DB2C0 (ELF 0x804D40F0): ███████████ (19)
DOL 0x800DC2C0 (ELF 0x804D50F0): ██████████ (18)
DOL 0x800DD2C0 (ELF 0x804D60F0): ██████████ (18)
DOL 0x800DE2C0 (ELF 0x804D70F0): █████████ (16)
DOL 0x800DF2C0 (ELF 0x804D80F0): █ (3)
DOL 0x800E02C0 (ELF 0x804D90F0): █████ (10)
DOL 0x800E12C0 (ELF 0x804DA0F0): ███ (6)
DOL 0x800E22C0 (ELF 0x804DB0F0): ███ (6)
DOL 0x800E32C0 (ELF 0x804DC0F0): ███ (6)
DOL 0x800E42C0 (ELF 0x804DD0F0): ██████ (11)
DOL 0x800E52C0 (ELF 0x804DE0F0): ████████████ (21)
DOL 0x800E62C0 (ELF 0x804DF0F0): ██████████████ (24)
DOL 0x800E72C0 (ELF 0x804E00F0): ██████████████ (24)
DOL 0x800E82C0 (ELF 0x804E10F0): █████ (10)
DOL 0x800E92C0 (ELF 0x804E20F0): █████████ (16)
DOL 0x800EA2C0 (ELF 0x804E30F0): ███████████████ (26)
DOL 0x800EB2C0 (ELF 0x804E40F0): ███████████ (19)
DOL 0x800EC2C0 (ELF 0x804E50F0): ██████████ (17)
DOL 0x800ED2C0 (ELF 0x804E60F0): ████ (7)
DOL 0x800EE2C0 (ELF 0x804E70F0): ██████████████ (24)
DOL 0x800EF2C0 (ELF 0x804E80F0): ████████████████████ (34)
DOL 0x800F02C0 (ELF 0x804E90F0): ████ (7)
DOL 0x800F12C0 (ELF 0x804EA0F0): ██████ (11)
DOL 0x800F22C0 (ELF 0x804EB0F0): ████████ (14)
DOL 0x800F32C0 (ELF 0x804EC0F0): ███████ (12)
DOL 0x800F42C0 (ELF 0x804ED0F0): ███████ (12)
DOL 0x800F52C0 (ELF 0x804EE0F0): ████ (8)
DOL 0x800F62C0 (ELF 0x804EF0F0): █ (3)
DOL 0x800F92C0 (ELF 0x804F20F0):  (1)
DOL 0x800FA2C0 (ELF 0x804F30F0):  (1)
DOL 0x800FB2C0 (ELF 0x804F40F0): ███ (6)
DOL 0x800FC2C0 (ELF 0x804F50F0): █████████████ (23)
DOL 0x800FD2C0 (ELF 0x804F60F0): ██████████████████ (31)
DOL 0x800FE2C0 (ELF 0x804F70F0): ███████████████████████████████████████ (67)
DOL 0x800FF2C0 (ELF 0x804F80F0): ██████████ (18)
DOL 0x801002C0 (ELF 0x804F90F0): █████████ (16)
DOL 0x801012C0 (ELF 0x804FA0F0): ██████████ (18)
DOL 0x801022C0 (ELF 0x804FB0F0): ████████ (15)
DOL 0x801032C0 (ELF 0x804FC0F0): ████ (8)
DOL 0x801042C0 (ELF 0x804FD0F0): ██████████████ (24)
DOL 0x801052C0 (ELF 0x804FE0F0): ███████████████ (26)
DOL 0x801062C0 (ELF 0x804FF0F0): █████████████████ (30)
DOL 0x801072C0 (ELF 0x805000F0): ████████████ (22)
DOL 0x801082C0 (ELF 0x805010F0): █████████ (16)
DOL 0x801092C0 (ELF 0x805020F0): ████████ (14)
DOL 0x8010A2C0 (ELF 0x805030F0): ████████████ (22)
DOL 0x8010B2C0 (ELF 0x805040F0): ██████ (11)
DOL 0x8010C2C0 (ELF 0x805050F0): ████████████ (21)
DOL 0x8010D2C0 (ELF 0x805060F0): ███ (6)
DOL 0x8010E2C0 (ELF 0x805070F0): ██████████ (18)
DOL 0x8010F2C0 (ELF 0x805080F0): ██ (5)
DOL 0x801102C0 (ELF 0x805090F0): █████ (10)
DOL 0x801112C0 (ELF 0x8050A0F0): ████████████ (21)
DOL 0x801122C0 (ELF 0x8050B0F0): ████████████ (21)
DOL 0x801132C0 (ELF 0x8050C0F0): ███████ (12)
DOL 0x801142C0 (ELF 0x8050D0F0): ██████ (11)
DOL 0x801152C0 (ELF 0x8050E0F0): ████████████ (21)
DOL 0x801162C0 (ELF 0x8050F0F0): ██████████ (17)
DOL 0x801172C0 (ELF 0x805100F0): ███████ (13)
DOL 0x801182C0 (ELF 0x805110F0): ███ (6)
DOL 0x801192C0 (ELF 0x805120F0): █████████ (16)
DOL 0x8011A2C0 (ELF 0x805130F0): ███████ (13)
DOL 0x8011B2C0 (ELF 0x805140F0): ███████ (12)
DOL 0x8011C2C0 (ELF 0x805150F0): ███████████ (19)
DOL 0x8011D2C0 (ELF 0x805160F0): ████ (7)
DOL 0x8011E2C0 (ELF 0x805170F0): ████████████ (21)
DOL 0x8011F2C0 (ELF 0x805180F0): ███████ (13)
DOL 0x801202C0 (ELF 0x805190F0): ████████ (15)
DOL 0x801212C0 (ELF 0x8051A0F0): ██████████ (17)
DOL 0x801222C0 (ELF 0x8051B0F0): ████████ (14)
DOL 0x801232C0 (ELF 0x8051C0F0): █████ (10)
DOL 0x801242C0 (ELF 0x8051D0F0): ████████ (15)
DOL 0x801252C0 (ELF 0x8051E0F0): ████ (8)
DOL 0x801262C0 (ELF 0x8051F0F0): ███████ (13)
DOL 0x801272C0 (ELF 0x805200F0): ███████████████████ (33)
DOL 0x801282C0 (ELF 0x805210F0): ███████ (12)
DOL 0x801292C0 (ELF 0x805220F0): ██████ (11)
DOL 0x8012A2C0 (ELF 0x805230F0): ██████ (11)
DOL 0x8012B2C0 (ELF 0x805240F0): ██████ (11)
DOL 0x8012C2C0 (ELF 0x805250F0): ██████████ (18)
DOL 0x8012D2C0 (ELF 0x805260F0): ███ (6)
DOL 0x8012E2C0 (ELF 0x805270F0): ███ (6)
DOL 0x8012F2C0 (ELF 0x805280F0): ████████ (15)
DOL 0x801302C0 (ELF 0x805290F0): ██████████████ (25)
DOL 0x801312C0 (ELF 0x8052A0F0): ████████ (15)
DOL 0x801322C0 (ELF 0x8052B0F0): █████ (10)
DOL 0x801332C0 (ELF 0x8052C0F0): █████████ (16)
DOL 0x801342C0 (ELF 0x8052D0F0): █ (2)
DOL 0x801362C0 (ELF 0x8052F0F0): █████ (9)
DOL 0x801372C0 (ELF 0x805300F0): ████████████████ (28)
DOL 0x801382C0 (ELF 0x805310F0): ████████████ (22)
DOL 0x801392C0 (ELF 0x805320F0): █████ (10)
DOL 0x8013A2C0 (ELF 0x805330F0): ██████████████ (24)
DOL 0x8013B2C0 (ELF 0x805340F0): ███████ (13)
DOL 0x8013C2C0 (ELF 0x805350F0): ███████ (13)
DOL 0x8013D2C0 (ELF 0x805360F0): ██████████ (17)
DOL 0x8013E2C0 (ELF 0x805370F0): █████ (9)
DOL 0x8013F2C0 (ELF 0x805380F0): ██ (4)
DOL 0x801402C0 (ELF 0x805390F0): ██ (4)
DOL 0x801412C0 (ELF 0x8053A0F0): ███████ (13)
DOL 0x801422C0 (ELF 0x8053B0F0): █████ (9)
DOL 0x801432C0 (ELF 0x8053C0F0): █ (2)
DOL 0x801442C0 (ELF 0x8053D0F0): ████████████ (22)
DOL 0x801452C0 (ELF 0x8053E0F0): ████████ (15)
DOL 0x801462C0 (ELF 0x8053F0F0): ███████ (12)
DOL 0x801472C0 (ELF 0x805400F0): ██████████████████████ (39)
DOL 0x801482C0 (ELF 0x805410F0): ███████ (12)
DOL 0x801492C0 (ELF 0x805420F0): ████████ (14)
DOL 0x8014A2C0 (ELF 0x805430F0): ████████ (14)
DOL 0x8014B2C0 (ELF 0x805440F0): ███████ (13)
DOL 0x8014C2C0 (ELF 0x805450F0): ██████ (11)
DOL 0x8014D2C0 (ELF 0x805460F0): ████████████ (22)
DOL 0x8014E2C0 (ELF 0x805470F0): ██████ (11)
DOL 0x8014F2C0 (ELF 0x805480F0): ███████ (13)
DOL 0x801502C0 (ELF 0x805490F0): ██████████ (18)
DOL 0x801512C0 (ELF 0x8054A0F0): ███████████ (19)
DOL 0x801522C0 (ELF 0x8054B0F0): ████████ (15)
DOL 0x801532C0 (ELF 0x8054C0F0): ███████████ (20)
DOL 0x801542C0 (ELF 0x8054D0F0): ████ (7)
DOL 0x801552C0 (ELF 0x8054E0F0): ████████████ (21)
DOL 0x801562C0 (ELF 0x8054F0F0): ███████ (13)
DOL 0x801572C0 (ELF 0x805500F0): ██████████████████ (31)
DOL 0x801582C0 (ELF 0x805510F0): ██████████ (17)
DOL 0x801592C0 (ELF 0x805520F0): █████ (9)
DOL 0x8015A2C0 (ELF 0x805530F0): ██ (5)
DOL 0x8015B2C0 (ELF 0x805540F0): ███████████ (19)
DOL 0x8015C2C0 (ELF 0x805550F0): ███████████ (20)
DOL 0x8015D2C0 (ELF 0x805560F0): ██ (4)
DOL 0x8015E2C0 (ELF 0x805570F0): ██ (5)
DOL 0x8015F2C0 (ELF 0x805580F0): ███████ (13)
DOL 0x801602C0 (ELF 0x805590F0): █████ (9)
DOL 0x801612C0 (ELF 0x8055A0F0): █████ (10)
DOL 0x801622C0 (ELF 0x8055B0F0): ██████ (11)
DOL 0x801632C0 (ELF 0x8055C0F0): ███ (6)
DOL 0x801642C0 (ELF 0x8055D0F0): █████ (9)
DOL 0x801652C0 (ELF 0x8055E0F0): ████ (8)
DOL 0x801662C0 (ELF 0x8055F0F0): ███████ (12)
DOL 0x801672C0 (ELF 0x805600F0): ███████████████ (26)
DOL 0x801682C0 (ELF 0x805610F0): █████████ (16)
DOL 0x801692C0 (ELF 0x805620F0): ████████ (14)
DOL 0x8016A2C0 (ELF 0x805630F0): █████████████████ (29)
DOL 0x8016B2C0 (ELF 0x805640F0): ████████████████ (28)
DOL 0x8016C2C0 (ELF 0x805650F0): ███████████ (20)
DOL 0x8016D2C0 (ELF 0x805660F0): ██████ (11)
DOL 0x8016E2C0 (ELF 0x805670F0): ████████ (15)
DOL 0x8016F2C0 (ELF 0x805680F0): ██████████████████ (31)
DOL 0x801702C0 (ELF 0x805690F0): ████████████ (21)
DOL 0x801712C0 (ELF 0x8056A0F0): ████████████████ (28)
DOL 0x801722C0 (ELF 0x8056B0F0): █████ (10)
DOL 0x801732C0 (ELF 0x8056C0F0): ████████ (14)
DOL 0x801742C0 (ELF 0x8056D0F0): ████████ (15)
DOL 0x801752C0 (ELF 0x8056E0F0): ███████ (13)
DOL 0x801762C0 (ELF 0x8056F0F0): ██████ (11)
DOL 0x801772C0 (ELF 0x805700F0): ██████████████ (24)
DOL 0x801782C0 (ELF 0x805710F0): ███████████ (20)
DOL 0x801792C0 (ELF 0x805720F0): ██ (4)
DOL 0x8017A2C0 (ELF 0x805730F0): █ (2)
DOL 0x8017B2C0 (ELF 0x805740F0): ██████ (11)
DOL 0x8017C2C0 (ELF 0x805750F0): ███ (6)
DOL 0x8017D2C0 (ELF 0x805760F0): ████████ (14)
DOL 0x8017E2C0 (ELF 0x805770F0): ██████████ (17)
DOL 0x8017F2C0 (ELF 0x805780F0): ████████ (14)
DOL 0x801802C0 (ELF 0x805790F0): ███ (6)
DOL 0x801812C0 (ELF 0x8057A0F0): █ (2)
DOL 0x801822C0 (ELF 0x8057B0F0): █████ (10)
DOL 0x801832C0 (ELF 0x8057C0F0): ██████████ (17)
DOL 0x801842C0 (ELF 0x8057D0F0): ████████ (15)
DOL 0x801852C0 (ELF 0x8057E0F0): ████ (7)
DOL 0x801882C0 (ELF 0x805810F0):  (1)
DOL 0x801892C0 (ELF 0x805820F0):  (1)
DOL 0x8018A2C0 (ELF 0x805830F0): █ (3)
DOL 0x8018B2C0 (ELF 0x805840F0): █ (2)
DOL 0x8018C2C0 (ELF 0x805850F0): ██ (4)
DOL 0x8018D2C0 (ELF 0x805860F0): █████ (9)
DOL 0x8018E2C0 (ELF 0x805870F0): ████ (8)
DOL 0x8018F2C0 (ELF 0x805880F0):  (1)
DOL 0x801902C0 (ELF 0x805890F0):  (1)
DOL 0x801912C0 (ELF 0x8058A0F0): ███ (6)
DOL 0x801922C0 (ELF 0x8058B0F0): ██ (5)
DOL 0x801932C0 (ELF 0x8058C0F0): ██ (5)
DOL 0x801942C0 (ELF 0x8058D0F0): ██ (4)
DOL 0x801952C0 (ELF 0x8058E0F0): ██ (5)
DOL 0x801962C0 (ELF 0x8058F0F0): ███ (6)
DOL 0x801972C0 (ELF 0x805900F0): █ (2)
DOL 0x801982C0 (ELF 0x805910F0): ███████████ (19)
DOL 0x801992C0 (ELF 0x805920F0): ██████████ (17)
DOL 0x8019A2C0 (ELF 0x805930F0): ██████████ (18)
DOL 0x8019B2C0 (ELF 0x805940F0): ████████████ (22)
DOL 0x8019C2C0 (ELF 0x805950F0): ██████ (11)
DOL 0x8019D2C0 (ELF 0x805960F0): ████████ (15)
DOL 0x8019E2C0 (ELF 0x805970F0): ████████████ (22)
DOL 0x8019F2C0 (ELF 0x805980F0): █████████ (16)
DOL 0x801A02C0 (ELF 0x805990F0): ██████ (11)
DOL 0x801A12C0 (ELF 0x8059A0F0): ███████ (13)
DOL 0x801A22C0 (ELF 0x8059B0F0): ███████ (13)
DOL 0x801A32C0 (ELF 0x8059C0F0): ████ (8)
DOL 0x801A42C0 (ELF 0x8059D0F0): ████ (8)
DOL 0x801A52C0 (ELF 0x8059E0F0): ████ (8)
DOL 0x801A62C0 (ELF 0x8059F0F0): ████ (7)
DOL 0x801A72C0 (ELF 0x805A00F0): ██ (5)
DOL 0x801A82C0 (ELF 0x805A10F0):  (1)
DOL 0x801A92C0 (ELF 0x805A20F0): ██████ (11)
DOL 0x801AA2C0 (ELF 0x805A30F0): ████████ (14)
DOL 0x801AB2C0 (ELF 0x805A40F0): ██ (4)
DOL 0x801AC2C0 (ELF 0x805A50F0): █████████ (16)
DOL 0x801AD2C0 (ELF 0x805A60F0): ████ (8)
DOL 0x801AE2C0 (ELF 0x805A70F0): ██████ (11)
DOL 0x801AF2C0 (ELF 0x805A80F0): ██████████ (18)
DOL 0x801B02C0 (ELF 0x805A90F0): █████ (9)
DOL 0x801B12C0 (ELF 0x805AA0F0): ██ (5)
DOL 0x801B22C0 (ELF 0x805AB0F0): ███████ (13)
DOL 0x801B32C0 (ELF 0x805AC0F0): █████████ (16)
DOL 0x801B42C0 (ELF 0x805AD0F0): ███████ (12)
DOL 0x801B52C0 (ELF 0x805AE0F0): ███████ (13)
DOL 0x801B62C0 (ELF 0x805AF0F0): ██████████ (18)
DOL 0x801B72C0 (ELF 0x805B00F0): ██████ (11)
DOL 0x801B82C0 (ELF 0x805B10F0): █████████ (16)
DOL 0x801B92C0 (ELF 0x805B20F0): ██ (5)
DOL 0x801BA2C0 (ELF 0x805B30F0): ███████ (13)
DOL 0x801BB2C0 (ELF 0x805B40F0): █████ (10)
DOL 0x801BC2C0 (ELF 0x805B50F0): ███████ (13)
DOL 0x801BD2C0 (ELF 0x805B60F0): ████████ (14)
DOL 0x801BE2C0 (ELF 0x805B70F0): █████ (9)
DOL 0x801BF2C0 (ELF 0x805B80F0): ██ (5)
DOL 0x801C02C0 (ELF 0x805B90F0): ████ (7)
DOL 0x801C12C0 (ELF 0x805BA0F0): ████████ (15)
DOL 0x801C22C0 (ELF 0x805BB0F0): ███ (6)
DOL 0x801C32C0 (ELF 0x805BC0F0): ████ (7)
DOL 0x801C42C0 (ELF 0x805BD0F0): ██ (5)
DOL 0x801C52C0 (ELF 0x805BE0F0): ███████ (13)
DOL 0x801C62C0 (ELF 0x805BF0F0): ████████ (14)
DOL 0x801C72C0 (ELF 0x805C00F0): ███ (6)
DOL 0x801C82C0 (ELF 0x805C10F0): ████████ (15)
DOL 0x801C92C0 (ELF 0x805C20F0): ███████ (13)
DOL 0x801CA2C0 (ELF 0x805C30F0): ███████ (12)
DOL 0x801CB2C0 (ELF 0x805C40F0): ████ (8)
DOL 0x801CC2C0 (ELF 0x805C50F0): ███████████ (20)
DOL 0x801CD2C0 (ELF 0x805C60F0): █████ (10)
DOL 0x801CE2C0 (ELF 0x805C70F0): ███ (6)
DOL 0x801CF2C0 (ELF 0x805C80F0): ████ (7)
DOL 0x801D02C0 (ELF 0x805C90F0): █████ (10)
DOL 0x801D12C0 (ELF 0x805CA0F0): ███████ (12)
DOL 0x801D22C0 (ELF 0x805CB0F0): ████ (8)
DOL 0x801D32C0 (ELF 0x805CC0F0): ██████████ (17)
DOL 0x801D42C0 (ELF 0x805CD0F0): ████████ (14)
DOL 0x801D52C0 (ELF 0x805CE0F0): ██████ (11)
DOL 0x801D62C0 (ELF 0x805CF0F0): ███████ (12)
DOL 0x801D72C0 (ELF 0x805D00F0): ███████ (13)
DOL 0x801D82C0 (ELF 0x805D10F0): ████████ (14)
DOL 0x801D92C0 (ELF 0x805D20F0): ██████ (11)
DOL 0x801DA2C0 (ELF 0x805D30F0): ████ (7)
DOL 0x801DB2C0 (ELF 0x805D40F0): ██████████████ (24)
DOL 0x801DC2C0 (ELF 0x805D50F0): ██████ (11)
DOL 0x801DD2C0 (ELF 0x805D60F0): █████████████ (23)
DOL 0x801DE2C0 (ELF 0x805D70F0): ███████ (12)
DOL 0x801DF2C0 (ELF 0x805D80F0): ████████ (15)
DOL 0x801E02C0 (ELF 0x805D90F0): ████████ (14)
DOL 0x801E12C0 (ELF 0x805DA0F0): ████████ (14)
DOL 0x801E22C0 (ELF 0x805DB0F0): ████ (7)
DOL 0x801E32C0 (ELF 0x805DC0F0): ██████ (11)
DOL 0x801E42C0 (ELF 0x805DD0F0): ███████ (12)
DOL 0x801E52C0 (ELF 0x805DE0F0): ███████ (12)
DOL 0x801E62C0 (ELF 0x805DF0F0): █████████ (16)
DOL 0x801E72C0 (ELF 0x805E00F0): ██████ (11)
DOL 0x801E82C0 (ELF 0x805E10F0): ███████████ (19)
DOL 0x801E92C0 (ELF 0x805E20F0): ██████████ (17)
DOL 0x801EA2C0 (ELF 0x805E30F0): ████ (7)
DOL 0x801EB2C0 (ELF 0x805E40F0): ████ (8)
DOL 0x801EC2C0 (ELF 0x805E50F0): ████████ (14)
DOL 0x801ED2C0 (ELF 0x805E60F0): ██████ (11)
DOL 0x801EE2C0 (ELF 0x805E70F0): ████████ (14)
DOL 0x801EF2C0 (ELF 0x805E80F0): ████████████ (21)
DOL 0x801F02C0 (ELF 0x805E90F0): ████████ (15)
DOL 0x801F12C0 (ELF 0x805EA0F0): █████████ (16)
DOL 0x801F22C0 (ELF 0x805EB0F0): ██ (4)
DOL 0x801F32C0 (ELF 0x805EC0F0): ████████ (14)
DOL 0x801F42C0 (ELF 0x805ED0F0): ███████████████ (27)
DOL 0x801F52C0 (ELF 0x805EE0F0): ██████████ (18)
DOL 0x801F62C0 (ELF 0x805EF0F0): ███████████████ (26)
DOL 0x801F72C0 (ELF 0x805F00F0): ███ (6)
DOL 0x801F82C0 (ELF 0x805F10F0): ██████ (11)
DOL 0x801F92C0 (ELF 0x805F20F0): ██████████████ (25)
DOL 0x801FA2C0 (ELF 0x805F30F0): █████████████ (23)
DOL 0x801FB2C0 (ELF 0x805F40F0): ██████████ (18)
DOL 0x801FC2C0 (ELF 0x805F50F0): ██ (4)
DOL 0x801FD2C0 (ELF 0x805F60F0): ███████ (12)
DOL 0x801FE2C0 (ELF 0x805F70F0): █ (3)
DOL 0x801FF2C0 (ELF 0x805F80F0): ███ (6)
DOL 0x802002C0 (ELF 0x805F90F0): ███ (6)
DOL 0x802012C0 (ELF 0x805FA0F0): ████ (8)
DOL 0x802022C0 (ELF 0x805FB0F0): ████ (7)
DOL 0x802032C0 (ELF 0x805FC0F0): ████████ (15)
DOL 0x802042C0 (ELF 0x805FD0F0): ████████ (15)
DOL 0x802052C0 (ELF 0x805FE0F0): ██ (5)
DOL 0x802062C0 (ELF 0x805FF0F0): ██ (5)
DOL 0x802112C0 (ELF 0x8060A0F0):  (1)
DOL 0x8022C2C0 (ELF 0x806250F0): ███████ (13)
DOL 0x802422C0 (ELF 0x8063B0F0): ██ (4)
```

## 7. Large Coverage Gaps (>64KB in DOL address space)

| DOL From | DOL To | Gap Size | ELF From | ELF To |
|----------|--------|----------|----------|--------|
| `0x80211364` | `0x8022C76C` | 111,624 B (109.0 KB) | `0x8060A194` | `0x8062559C` |
| `0x8022D090` | `0x80242658` | 87,496 B (85.4 KB) | `0x80625EC0` | `0x8063B488` |

## 8. Most-Referenced Addresses (Shared Across Files)

| ELF Address | DOL Address | Referenced In | Total Refs |
|-------------|-------------|---------------|------------|
| `0x8050BC00` | `0x80112DD0` | 8 files | 8 |
| `0x805565B0` | `0x8015D780` | 8 files | 9 |
| `0x80557D54` | `0x8015EF24` | 8 files | 8 |
| `0x80557DF8` | `0x8015EFC8` | 8 files | 8 |
| `0x805585FC` | `0x8015F7CC` | 8 files | 8 |
| `0x80558718` | `0x8015F8E8` | 8 files | 8 |
| `0x805589A8` | `0x8015FB78` | 8 files | 8 |
| `0x80558AC4` | `0x8015FC94` | 8 files | 8 |
| `0x80558C24` | `0x8015FDF4` | 8 files | 8 |
| `0x80558CCC` | `0x8015FE9C` | 8 files | 8 |
| `0x80558D5C` | `0x8015FF2C` | 8 files | 8 |
| `0x80558E64` | `0x80160034` | 8 files | 8 |
| `0x80559214` | `0x801603E4` | 8 files | 8 |
| `0x8055946C` | `0x8016063C` | 8 files | 9 |
| `0x8055B180` | `0x80162350` | 8 files | 8 |

## 9. Conclusions

- **7,273 unique function addresses** annotated across **162 source files** in **7 modules**
- **99.3%** of all 20,327 annotations map to valid code sections (after applying ELF→DOL delta `0x003F8E30`)
- **1.23%** of DOL code space covered (7,273 unique addresses across 589,752 instruction words)
- **7,100 addresses** shared across multiple files (header/cpp declaration pairs, common utilities)
- **147 non-code references**: 20 data, 70 BSS, 57 out-of-range
- **2 coverage gaps** > 64KB identified; largest: 109.0 KB
