/* Function at 0x8071CE9C, size=84 bytes */
/* Stack frame: 64 bytes */
/* Calls: 1 function(s) */

void FUN_8071CE9C(int r3, int r4, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x8071CEA4
    r0 = *(0x33 + r3); // lbz @ 0x8071CEA8
    if (!=) goto 0x0x8071cee0;
    /* li r0, 0 */ // 0x8071CEB4
    *(8 + r1) = r0; // stw @ 0x8071CEB8
    /* li r9, -1 */ // 0x8071CEBC
    *(0xc + r1) = r9; // stw @ 0x8071CEC4
    /* slwi r0, r4, 2 */ // 0x8071CEC8
    r9 = r8;
    /* li r8, 0 */ // 0x8071CED0
    r4 = *(0 + r3); // lwz @ 0x8071CED4
    /* lwzx r4, r4, r0 */ // 0x8071CED8
    FUN_8071D920(r9, r8); // bl 0x8071D920
    r0 = *(0x44 + r1); // lwz @ 0x8071CEE0
    return;
}