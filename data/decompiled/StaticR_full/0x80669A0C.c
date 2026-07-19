/* Function at 0x80669A0C, size=152 bytes */
/* Stack frame: 0 bytes */

int FUN_80669A0C(int r3, int r6, int r7, int r8)
{
    /* li r0, 0 */ // 0x80669A10
    if (==) goto 0x0x80669a34;
    if (==) goto 0x0x80669a3c;
    if (==) goto 0x0x80669a44;
    if (==) goto 0x0x80669a4c;
    /* b 0x80669a50 */ // 0x80669A30
    /* li r0, 1 */ // 0x80669A34
    /* b 0x80669a50 */ // 0x80669A38
    /* li r0, 2 */ // 0x80669A3C
    /* b 0x80669a50 */ // 0x80669A40
    /* li r0, 3 */ // 0x80669A44
    /* b 0x80669a50 */ // 0x80669A48
    /* li r0, 4 */ // 0x80669A4C
    /* mulli r0, r0, 0x18 */ // 0x80669A50
    /* lis r3, 0 */ // 0x80669A54
    r3 = r3 + 0; // 0x80669A58
    r8 = r3 + r0; // 0x80669A5C
    /* lhax r7, r3, r0 */ // 0x80669A60
    r6 = *(2 + r8); // lha @ 0x80669A64
    r3 = *(4 + r8); // lha @ 0x80669A68
    r0 = *(6 + r8); // lha @ 0x80669A6C
    *(0 + r4) = r7; // sth @ 0x80669A70
    r7 = *(8 + r8); // lha @ 0x80669A74
    *(2 + r4) = r6; // sth @ 0x80669A78
    r6 = *(0xa + r8); // lha @ 0x80669A7C
    *(4 + r4) = r3; // sth @ 0x80669A80
    r3 = *(0xc + r8); // lha @ 0x80669A84
    *(6 + r4) = r0; // sth @ 0x80669A88
    r0 = *(0xe + r8); // lha @ 0x80669A8C
    *(0 + r5) = r7; // sth @ 0x80669A90
    *(2 + r5) = r6; // sth @ 0x80669A94
    *(4 + r5) = r3; // sth @ 0x80669A98
    *(6 + r5) = r0; // sth @ 0x80669A9C
    return;
}