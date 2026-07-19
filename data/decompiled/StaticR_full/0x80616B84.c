/* Function at 0x80616B84, size=68 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */

int FUN_80616B84(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x3c + r1) = r31; // stw @ 0x80616B94
    /* lis r31, 0 */ // 0x80616B98
    r31 = r31 + 0; // 0x80616B9C
    *(0x38 + r1) = r30; // stw @ 0x80616BA0
    /* lis r30, 0 */ // 0x80616BA4
    r30 = r30 + 0; // 0x80616BA8
    *(0x34 + r1) = r29; // stw @ 0x80616BAC
    r29 = r3;
    r4 = *(0x14 + r3); // lhz @ 0x80616BB4
    r0 = *(0xf2 + r30); // lha @ 0x80616BB8
    r0 = r4 + r0; // 0x80616BBC
    *(0x14 + r3) = r0; // sth @ 0x80616BC0
    *(8 + r1) = r0; // sth @ 0x80616BC4
}