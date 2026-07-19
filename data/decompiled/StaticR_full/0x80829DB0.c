/* Function at 0x80829DB0, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_80829DB0(int r3)
{
    /* lfs f0, 0x68(r3) */ // 0x80829DB0
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80829DB4
    if (>=) goto 0x0x80829dd8;
    /* fadds f0, f0, f2 */ // 0x80829DBC
    /* stfs f0, 0x68(r3) */ // 0x80829DC0
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80829DC4
    if (<=) goto 0x0x80829dd0;
    /* stfs f1, 0x68(r3) */ // 0x80829DCC
    /* li r3, 1 */ // 0x80829DD0
    return;
    /* li r3, 0 */ // 0x80829DD8
    return;
}