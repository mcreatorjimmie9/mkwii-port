/* Function at 0x80626C88, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80626C88(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80626C9C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80626CA4
    r29 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x80626CB0
    /* li r0, 0 */ // 0x80626CB4
    r3 = r3 + 0; // 0x80626CB8
    *(0xc + r29) = r3; // stw @ 0x80626CBC
    r3 = r29;
    *(0x10 + r29) = r30; // stw @ 0x80626CC4
    *(0x14 + r29) = r31; // stw @ 0x80626CC8
    *(0x18 + r29) = r0; // stw @ 0x80626CCC
    r31 = *(0x1c + r1); // lwz @ 0x80626CD0
    r30 = *(0x18 + r1); // lwz @ 0x80626CD4
    r29 = *(0x14 + r1); // lwz @ 0x80626CD8
    r0 = *(0x24 + r1); // lwz @ 0x80626CDC
    return;
}