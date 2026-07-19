/* Function at 0x8065C110, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8065C110(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8065C120
    *(0x18 + r1) = r30; // stw @ 0x8065C124
    r30 = *(0 + r3); // lwz @ 0x8065C128
    *(0x14 + r1) = r29; // stw @ 0x8065C12C
    r29 = *(0 + r4); // lwz @ 0x8065C130
    r4 = r30;
    r3 = *(0 + r31); // lwz @ 0x8065C138
    r3 = *(0 + r3); // lwz @ 0x8065C13C
    r3 = *(0x404 + r3); // lwz @ 0x8065C140
    FUN_8065984C(r4); // bl 0x8065984C
    FUN_8065C1A0(r4); // bl 0x8065C1A0
    r5 = *(0 + r31); // lwz @ 0x8065C14C
    r31 = r3;
    r4 = r29;
    r3 = *(0 + r5); // lwz @ 0x8065C158
    r3 = *(0x404 + r3); // lwz @ 0x8065C15C
    FUN_8065984C(r4); // bl 0x8065984C
    FUN_8065C1A0(r4); // bl 0x8065C1A0
    if (>=) goto 0x0x8065c178;
    /* li r3, -1 */ // 0x8065C170
    /* b 0x8065c184 */ // 0x8065C174
    /* li r3, 1 */ // 0x8065C178
    if (>) goto 0x0x8065c184;
    /* subf r3, r29, r30 */ // 0x8065C180
    r0 = *(0x24 + r1); // lwz @ 0x8065C184
    r31 = *(0x1c + r1); // lwz @ 0x8065C188
    r30 = *(0x18 + r1); // lwz @ 0x8065C18C
    r29 = *(0x14 + r1); // lwz @ 0x8065C190
    return;
}