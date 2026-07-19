/* Function at 0x8071CF44, size=84 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8071CF44(int r3, int r4, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    r12 = r9;
    *(0x14 + r1) = r0; // stw @ 0x8071CF50
    r11 = *(0x18 + r1); // lwz @ 0x8071CF54
    r0 = *(0x33 + r3); // lbz @ 0x8071CF58
    if (!=) goto 0x0x8071cf88;
    *(8 + r1) = r10; // stw @ 0x8071CF64
    r9 = r8;
    /* slwi r0, r4, 2 */ // 0x8071CF6C
    r10 = r12;
    *(0xc + r1) = r11; // stw @ 0x8071CF74
    /* li r8, 1 */ // 0x8071CF78
    r4 = *(8 + r3); // lwz @ 0x8071CF7C
    /* lwzx r4, r4, r0 */ // 0x8071CF80
    FUN_8071D920(r10, r8); // bl 0x8071D920
    r0 = *(0x14 + r1); // lwz @ 0x8071CF88
    return;
}