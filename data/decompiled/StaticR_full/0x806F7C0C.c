/* Function at 0x806F7C0C, size=328 bytes */
/* Stack frame: 0 bytes */

int FUN_806F7C0C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* lis r5, 0 */ // 0x806F7C0C
    /* li r0, 2 */ // 0x806F7C10
    r5 = *(0 + r5); // lwz @ 0x806F7C14
    /* li r8, 0 */ // 0x806F7C18
    /* li r9, 0 */ // 0x806F7C1C
    /* addis r7, r5, 2 */ // 0x806F7C20
    /* mtctr r0 */ // 0x806F7C24
    r5 = *(0x4ffc + r7); // lwz @ 0x806F7C28
    r0 = r9 rlwinm 2; // rlwinm
    /* addis r6, r5, 2 */ // 0x806F7C30
    r5 = r6 + r0; // 0x806F7C34
    r0 = *(0x6ae0 + r5); // lwz @ 0x806F7C38
    if (!=) goto 0x0x806f7c4c;
    /* li r8, 1 */ // 0x806F7C44
    /* b 0x806f7cd4 */ // 0x806F7C48
    r9 = r9 + 1; // 0x806F7C4C
    r0 = r9 rlwinm 2; // rlwinm
    r5 = r6 + r0; // 0x806F7C54
    r0 = *(0x6ae0 + r5); // lwz @ 0x806F7C58
    if (!=) goto 0x0x806f7c6c;
    /* li r8, 1 */ // 0x806F7C64
    /* b 0x806f7cd4 */ // 0x806F7C68
    r9 = r9 + 1; // 0x806F7C6C
    r0 = r9 rlwinm 2; // rlwinm
    r5 = r6 + r0; // 0x806F7C74
    r0 = *(0x6ae0 + r5); // lwz @ 0x806F7C78
    if (!=) goto 0x0x806f7c8c;
    /* li r8, 1 */ // 0x806F7C84
    /* b 0x806f7cd4 */ // 0x806F7C88
    r9 = r9 + 1; // 0x806F7C8C
    r0 = r9 rlwinm 2; // rlwinm
    r5 = r6 + r0; // 0x806F7C94
    r0 = *(0x6ae0 + r5); // lwz @ 0x806F7C98
    if (!=) goto 0x0x806f7cac;
    /* li r8, 1 */ // 0x806F7CA4
    /* b 0x806f7cd4 */ // 0x806F7CA8
    r9 = r9 + 1; // 0x806F7CAC
    r0 = r9 rlwinm 2; // rlwinm
    r5 = r6 + r0; // 0x806F7CB4
    r0 = *(0x6ae0 + r5); // lwz @ 0x806F7CB8
    if (!=) goto 0x0x806f7ccc;
    /* li r8, 1 */ // 0x806F7CC4
    /* b 0x806f7cd4 */ // 0x806F7CC8
    r9 = r9 + 1; // 0x806F7CCC
    if (counter-- != 0) goto 0x0x806f7c28;
    /* bnelr  */ // 0x806F7CD8
    /* li r10, 0 */ // 0x806F7CDC
    r0 = *(0x7590 + r3); // lwz @ 0x806F7CE0
    r8 = r3;
    r9 = r10 rlwinm 2; // rlwinm
    /* li r11, 0 */ // 0x806F7CEC
    /* mtctr r0 */ // 0x806F7CF0
    if (<=) goto 0x0x806f7d28;
    r5 = *(0x4ffc + r7); // lwz @ 0x806F7CFC
    r6 = *(0x75a4 + r8); // lwz @ 0x806F7D00
    /* addis r0, r5, 2 */ // 0x806F7D04
    r5 = r0 + r9; // 0x806F7D08
    r0 = *(0x6ae0 + r5); // lwz @ 0x806F7D0C
    if (!=) goto 0x0x806f7d20;
    /* li r11, 1 */ // 0x806F7D18
    /* b 0x806f7d28 */ // 0x806F7D1C
    r8 = r8 + 0x70; // 0x806F7D20
    if (counter-- != 0) goto 0x0x806f7cfc;
    if (!=) goto 0x0x806f7d44;
    r3 = *(0x4ffc + r7); // lwz @ 0x806F7D30
    /* addis r0, r3, 2 */ // 0x806F7D34
    r3 = r0 + r9; // 0x806F7D38
    *(0x6ae0 + r3) = r4; // stw @ 0x806F7D3C
    return;
    if (<) goto 0x0x806f7ce0;
    return;
}