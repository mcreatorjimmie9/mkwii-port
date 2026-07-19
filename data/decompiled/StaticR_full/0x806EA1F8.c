/* Function at 0x806EA1F8, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806EA1F8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x806EA20C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806EA214
    r29 = r3;
    FUN_806EA380(); // bl 0x806EA380
    /* mulli r4, r31, 0x14 */ // 0x806EA220
    /* slwi r0, r3, 2 */ // 0x806EA224
    r3 = r29 + r4; // 0x806EA228
    r3 = r3 + r0; // 0x806EA22C
    r0 = *(2 + r3); // lhz @ 0x806EA230
    /* subf r0, r0, r30 */ // 0x806EA234
    if (>=) goto 0x0x806ea244;
    /* li r0, 1 */ // 0x806EA240
    r31 = *(0x1c + r1); // lwz @ 0x806EA244
    /* clrlwi r3, r0, 0x10 */ // 0x806EA248
    r30 = *(0x18 + r1); // lwz @ 0x806EA24C
    r29 = *(0x14 + r1); // lwz @ 0x806EA250
    r0 = *(0x24 + r1); // lwz @ 0x806EA254
    return;
}