/* Function at 0x80685FEC, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80685FEC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* slwi r0, r4, 2 */ // 0x80685FF8
    r4 = r5;
    *(0xc + r1) = r31; // stw @ 0x80686000
    r5 = r3 + r0; // 0x80686004
    *(8 + r1) = r30; // stw @ 0x80686008
    r6 = *(0x37c + r3); // lwz @ 0x8068600C
    r30 = *(8 + r5); // lwz @ 0x80686010
    /* slwi r0, r6, 2 */ // 0x80686014
    r31 = r3 + r0; // 0x80686018
    *(0x354 + r31) = r30; // stw @ 0x8068601C
    r5 = *(0x37c + r3); // lwz @ 0x80686020
    r0 = r5 + 1; // 0x80686024
    *(0x37c + r3) = r0; // stw @ 0x80686028
    r3 = r30;
    FUN_80671C0C(r3); // bl 0x80671C0C
    r3 = r30;
    FUN_806712AC(r3, r3); // bl 0x806712AC
    r3 = *(0x354 + r31); // lwz @ 0x8068603C
    r31 = *(0xc + r1); // lwz @ 0x80686040
    r30 = *(8 + r1); // lwz @ 0x80686044
    r0 = *(0x14 + r1); // lwz @ 0x80686048
    return;
}