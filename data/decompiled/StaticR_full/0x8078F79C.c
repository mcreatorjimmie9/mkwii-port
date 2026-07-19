/* Function at 0x8078F79C, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078F79C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r4, 0 */ // 0x8078F7A8
    *(0x14 + r1) = r0; // stw @ 0x8078F7AC
    r6 = r3;
    *(0xc + r1) = r31; // stw @ 0x8078F7B4
    r0 = *(0x90 + r3); // lwz @ 0x8078F7B8
    /* mtctr r0 */ // 0x8078F7BC
    if (<=) goto 0x0x8078f7f0;
    r0 = *(0x80 + r6); // lwz @ 0x8078F7C8
    if (!=) goto 0x0x8078f7e4;
    /* slwi r0, r4, 2 */ // 0x8078F7D4
    r4 = r3 + r0; // 0x8078F7D8
    r31 = r4 + 0x80; // 0x8078F7DC
    /* b 0x8078f7f4 */ // 0x8078F7E0
    r6 = r6 + 4; // 0x8078F7E4
    r4 = r4 + 1; // 0x8078F7E8
    if (counter-- != 0) goto 0x0x8078f7c8;
    /* li r31, 0 */ // 0x8078F7F0
    if (==) goto 0x0x8078f810;
    r4 = r31;
    /* li r6, 0 */ // 0x8078F800
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8078f814 */ // 0x8078F80C
    /* li r3, 0 */ // 0x8078F810
    r0 = *(0x14 + r1); // lwz @ 0x8078F814
    r31 = *(0xc + r1); // lwz @ 0x8078F818
}