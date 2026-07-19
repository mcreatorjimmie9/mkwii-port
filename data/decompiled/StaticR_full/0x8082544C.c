/* Function at 0x8082544C, size=64 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8082544C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* mulli r3, r4, 0x248 */ // 0x80825454
    /* li r0, 0 */ // 0x8082545C
    *(0x2c + r1) = r31; // stw @ 0x80825460
    /* lis r31, 0 */ // 0x80825464
    *(0x28 + r1) = r30; // stw @ 0x80825468
    *(0x24 + r1) = r29; // stw @ 0x8082546C
    r29 = r4;
    r5 = *(0 + r31); // lwz @ 0x80825474
    r4 = *(0x14 + r5); // lwz @ 0x80825478
    r30 = r4 + r3; // 0x8082547C
    *(8 + r1) = r0; // stw @ 0x80825480
    r3 = r30;
    FUN_8061DA88(r3); // bl 0x8061DA88
}