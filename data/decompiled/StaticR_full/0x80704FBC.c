/* Function at 0x80704FBC, size=52 bytes */
/* Stack frame: 544 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_80704FBC(int r3, int r4, int r5)
{
    /* Stack frame: -544(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x80704FCC
    r30 = r5;
    *(0x214 + r1) = r29; // stw @ 0x80704FD8
    r29 = r4;
    *(0x210 + r1) = r28; // stw @ 0x80704FE0
    r28 = r3;
    FUN_805E3430(r3); // bl 0x805E3430
}