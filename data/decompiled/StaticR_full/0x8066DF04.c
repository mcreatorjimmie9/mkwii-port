/* Function at 0x8066DF04, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8066DF04(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8066DF18
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8066DF20
    r29 = r3;
    FUN_8066E240(); // bl 0x8066E240
    /* lis r3, 0 */ // 0x8066DF2C
    r5 = *(0x2c + r29); // lwz @ 0x8066DF30
    r3 = *(0 + r3); // lwz @ 0x8066DF34
    r4 = r31;
    FUN_805B7BB0(r3, r4); // bl 0x805B7BB0
    r5 = r3;
    r3 = r29;
    r4 = r30;
    FUN_8066DBB8(r4, r5, r3, r4); // bl 0x8066DBB8
    r0 = *(0x24 + r1); // lwz @ 0x8066DF50
    r31 = *(0x1c + r1); // lwz @ 0x8066DF54
    r30 = *(0x18 + r1); // lwz @ 0x8066DF58
    r29 = *(0x14 + r1); // lwz @ 0x8066DF5C
    return;
}