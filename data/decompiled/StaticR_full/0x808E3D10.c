/* Function at 0x808E3D10, size=116 bytes */
/* Stack frame: 0 bytes */

int FUN_808E3D10(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r4, 0 */ // 0x808E3D10
    /* li r0, 0 */ // 0x808E3D14
    *(0x50 + r3) = r0; // sth @ 0x808E3D18
    /* li r6, 0 */ // 0x808E3D1C
    /* lfs f0, 0(r4) */ // 0x808E3D20
    /* b 0x808e3d70 */ // 0x808E3D24
    r0 = r6 rlwinm 4; // rlwinm
    r5 = r3 + r0; // 0x808E3D2C
    r0 = *(0x11 + r5); // lbz @ 0x808E3D30
    if (==) goto 0x0x808e3d6c;
    /* li r7, 0 */ // 0x808E3D3C
    /* b 0x808e3d5c */ // 0x808E3D40
    /* clrlwi r0, r7, 0x18 */ // 0x808E3D44
    r4 = *(8 + r5); // lwz @ 0x808E3D48
    /* mulli r0, r0, 0x2c */ // 0x808E3D4C
    r7 = r7 + 1; // 0x808E3D50
    r4 = r4 + r0; // 0x808E3D54
    /* stfs f0, 0x28(r4) */ // 0x808E3D58
    r0 = *(4 + r3); // lbz @ 0x808E3D5C
    /* clrlwi r4, r7, 0x18 */ // 0x808E3D60
    if (<) goto 0x0x808e3d44;
    r6 = r6 + 1; // 0x808E3D6C
    r0 = *(5 + r3); // lbz @ 0x808E3D70
    /* clrlwi r4, r6, 0x18 */ // 0x808E3D74
    if (<) goto 0x0x808e3d28;
    return;
}