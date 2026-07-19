/* Function at 0x80704BD4, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80704BD4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80704BE0
    *(0xc + r1) = r31; // stw @ 0x80704BE4
    r31 = r5;
    if (<=) goto 0x0x80704c30;
    r3 = *(0 + r4); // lwz @ 0x80704BF0
    r0 = *(0xc + r3); // lwz @ 0x80704BF4
    r4 = *(8 + r3); // lwz @ 0x80704BF8
    if (!=) goto 0x0x80704c1c;
    r3 = *(0x18 + r5); // lwz @ 0x80704C04
    /* li r5, 0x60 */ // 0x80704C08
    FUN_805E3430(r5); // bl 0x805E3430
    /* li r0, 1 */ // 0x80704C10
    *(4 + r31) = r0; // stw @ 0x80704C14
    /* b 0x80704c40 */ // 0x80704C18
    r4 = *(0x10 + r5); // lwz @ 0x80704C1C
    r3 = r31;
    /* li r5, 8 */ // 0x80704C24
    FUN_80704DE0(r3, r5); // bl 0x80704DE0
    /* b 0x80704c40 */ // 0x80704C2C
    r4 = *(0x10 + r5); // lwz @ 0x80704C30
    r3 = r31;
    /* li r5, 1 */ // 0x80704C38
    FUN_80704DE0(r3, r5); // bl 0x80704DE0
    r0 = *(0x14 + r1); // lwz @ 0x80704C40
    r31 = *(0xc + r1); // lwz @ 0x80704C44
}