/* Function at 0x8071CEF0, size=84 bytes */
/* Stack frame: 64 bytes */
/* Calls: 1 function(s) */

void FUN_8071CEF0(int r3, int r4, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x8071CEF8
    r0 = *(0x33 + r3); // lbz @ 0x8071CEFC
    if (!=) goto 0x0x8071cf34;
    /* li r0, 0 */ // 0x8071CF08
    *(8 + r1) = r0; // stw @ 0x8071CF0C
    /* li r9, -1 */ // 0x8071CF10
    *(0xc + r1) = r9; // stw @ 0x8071CF18
    /* slwi r0, r4, 2 */ // 0x8071CF1C
    r9 = r8;
    /* li r8, 0 */ // 0x8071CF24
    r4 = *(4 + r3); // lwz @ 0x8071CF28
    /* lwzx r4, r4, r0 */ // 0x8071CF2C
    FUN_8071D920(r9, r8); // bl 0x8071D920
    r0 = *(0x44 + r1); // lwz @ 0x8071CF34
    return;
}