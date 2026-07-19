/* Function at 0x80685F40, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80685F40(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r3;
    r3 = r4;
    *(0x14 + r1) = r0; // stw @ 0x80685F50
    /* slwi r0, r4, 2 */ // 0x80685F54
    *(0xc + r1) = r31; // stw @ 0x80685F58
    r31 = r5 + r0; // 0x80685F5C
    r4 = *(0 + r5); // lwz @ 0x80685F60
    FUN_80697C50(); // bl 0x80697C50
    *(0x380 + r31) = r3; // stw @ 0x80685F6C
    if (==) goto 0x0x80685f78;
    FUN_80672614(); // bl 0x80672614
    r0 = *(0x14 + r1); // lwz @ 0x80685F78
    r31 = *(0xc + r1); // lwz @ 0x80685F7C
    return;
}