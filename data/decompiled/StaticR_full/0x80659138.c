/* Function at 0x80659138, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80659138(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 1 */ // 0x80659140
    r31 = r4 + -0x6c10; // 0x8065914C
    *(0x18 + r1) = r30; // stw @ 0x80659150
    /* lis r30, 0 */ // 0x80659154
    *(0x14 + r1) = r29; // stw @ 0x80659158
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x80659160
    /* li r28, 0 */ // 0x80659164
    r4 = *(0 + r30); // lwz @ 0x80659168
    r3 = r29 + 8; // 0x8065916C
    r0 = *(0x36 + r4); // lha @ 0x80659170
    if (<) goto 0x0x80659190;
    /* clrlwi r0, r0, 0x18 */ // 0x8065917C
    r0 = r31 * r0; // 0x80659180
    r4 = r4 + r0; // 0x80659184
    r4 = r4 + 0x38; // 0x80659188
    /* b 0x80659194 */ // 0x8065918C
    /* li r4, 0 */ // 0x80659190
    /* clrlwi r0, r28, 0x10 */ // 0x80659194
    /* mulli r0, r0, 0x1c0 */ // 0x80659198
    r4 = r4 + r0; // 0x8065919C
    r4 = r4 + 0x59d0; // 0x806591A0
    FUN_805A931C(r4, r4); // bl 0x805A931C
    r28 = r28 + 1; // 0x806591A8
    r29 = r29 + 0x1d8; // 0x806591AC
    if (<) goto 0x0x80659168;
    /* lis r3, 0 */ // 0x806591B8
    r3 = *(0 + r3); // lwz @ 0x806591BC
    r3 = *(0x90 + r3); // lwz @ 0x806591C0
    FUN_806845FC(r3); // bl 0x806845FC
    r0 = *(0x24 + r1); // lwz @ 0x806591C8
    r31 = *(0x1c + r1); // lwz @ 0x806591CC
    r30 = *(0x18 + r1); // lwz @ 0x806591D0
    r29 = *(0x14 + r1); // lwz @ 0x806591D4
    r28 = *(0x10 + r1); // lwz @ 0x806591D8
    return;
}