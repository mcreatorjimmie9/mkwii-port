/* Function at 0x805B7230, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805B7230(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x805B7238
    /* li r31, 0 */ // 0x805B7244
    *(0x18 + r1) = r30; // stw @ 0x805B7248
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805B7250
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805B7258
    r28 = r3;
    r6 = *(0 + r6); // lwz @ 0x805B7260
    r0 = *(0x263 + r6); // lbz @ 0x805B7264
    if (!=) goto 0x0x805b7278;
    /* li r3, 0 */ // 0x805B7270
    /* b 0x805b72ec */ // 0x805B7274
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (==) goto 0x0x805b72b0;
    if (==) goto 0x0x805b7298;
    /* li r0, 0 */ // 0x805B7290
    *(0 + r29) = r0; // stw @ 0x805B7294
    if (==) goto 0x0x805b72a8;
}