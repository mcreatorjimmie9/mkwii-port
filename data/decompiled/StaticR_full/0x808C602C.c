/* Function at 0x808C602C, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808C602C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x808C6038
    r4 = *(0x240 + r4); // lwz @ 0x808C603C
    r0 = r4 + -1; // 0x808C6040
    if (<=) goto 0x0x808c6074;
    r0 = r4 + -4; // 0x808C604C
    if (<=) goto 0x0x808c607c;
    if (==) goto 0x0x808c606c;
    if (==) goto 0x0x808c6084;
    /* b 0x808c6124 */ // 0x808C6068
    /* li r0, 0 */ // 0x808C606C
    /* b 0x808c6090 */ // 0x808C6070
    /* li r0, 1 */ // 0x808C6074
    /* b 0x808c6090 */ // 0x808C6078
    /* li r0, 2 */ // 0x808C607C
    /* b 0x808c6090 */ // 0x808C6080
    /* li r0, 3 */ // 0x808C6084
    /* b 0x808c6090 */ // 0x808C6088
    /* b 0x808c6124 */ // 0x808C608C
    /* mulli r0, r0, 0x174 */ // 0x808C6090
    /* li r4, 0 */ // 0x808C6094
    r3 = r3 + r0; // 0x808C6098
    r3 = r3 + 0x75c; // 0x808C609C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x808C60A4
    r31 = r3;
    if (==) goto 0x0x808c60c0;
    if (==) goto 0x0x808c6114;
    /* b 0x808c6124 */ // 0x808C60BC
    r3 = *(0 + r3); // lwz @ 0x808C60C0
    /* slwi r0, r0, 4 */ // 0x808C60C4
    /* lwzx r3, r3, r0 */ // 0x808C60C8
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x808C60D0
    /* lis r0, 0x4330 */ // 0x808C60D4
    *(0xc + r1) = r4; // stw @ 0x808C60D8
    /* lis r3, 0 */ // 0x808C60DC
    /* lfd f3, 0(r3) */ // 0x808C60E0
    /* lis r5, 0 */ // 0x808C60E4
    *(8 + r1) = r0; // stw @ 0x808C60E8
    r3 = r31;
}