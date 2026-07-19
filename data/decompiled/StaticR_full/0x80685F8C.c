/* Function at 0x80685F8C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80685F8C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* slwi r5, r4, 2 */ // 0x80685F94
    *(0x14 + r1) = r0; // stw @ 0x80685F98
    r6 = r3 + r5; // 0x80685F9C
    *(0xc + r1) = r31; // stw @ 0x80685FA0
    r0 = *(0x37c + r3); // lwz @ 0x80685FA4
    r4 = *(4 + r3); // lwz @ 0x80685FA8
    /* slwi r0, r0, 2 */ // 0x80685FAC
    r31 = *(8 + r6); // lwz @ 0x80685FB0
    r5 = r3 + r0; // 0x80685FB4
    *(0x354 + r5) = r31; // stw @ 0x80685FB8
    r5 = *(0x37c + r3); // lwz @ 0x80685FBC
    r0 = r5 + 1; // 0x80685FC0
    *(0x37c + r3) = r0; // stw @ 0x80685FC4
    r3 = r31;
    FUN_80671C0C(r3); // bl 0x80671C0C
    r3 = r31;
    FUN_806712AC(r3, r3); // bl 0x806712AC
    r0 = *(0x14 + r1); // lwz @ 0x80685FD8
    r31 = *(0xc + r1); // lwz @ 0x80685FDC
    return;
}