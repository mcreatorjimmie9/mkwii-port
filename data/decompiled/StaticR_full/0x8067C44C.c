/* Function at 0x8067C44C, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8067C44C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8067C460
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8067C468
    r29 = r3;
    if (==) goto 0x0x8067c568;
    /* addis r3, r3, 2 */ // 0x8067C474
    /* li r4, -1 */ // 0x8067C478
    r3 = r3 + -0x43cc; // 0x8067C47C
    FUN_806DDA58(r4, r3); // bl 0x806DDA58
    /* addis r3, r29, 2 */ // 0x8067C484
    /* li r4, -1 */ // 0x8067C488
    r3 = r3 + -0x4544; // 0x8067C48C
    FUN_806DDA58(r3, r4, r3); // bl 0x806DDA58
    /* addis r3, r29, 2 */ // 0x8067C494
    /* li r4, -1 */ // 0x8067C498
    r3 = r3 + -0x46bc; // 0x8067C49C
    FUN_806DDA58(r3, r4, r3); // bl 0x806DDA58
    /* lis r4, 0 */ // 0x8067C4A4
    r3 = r29 + 0x64a4; // 0x8067C4A8
    r4 = r4 + 0; // 0x8067C4AC
    /* li r5, 0x1b4 */ // 0x8067C4B0
    /* li r6, 0xc8 */ // 0x8067C4B4
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r29 + 0x6230; // 0x8067C4BC
    /* li r4, -1 */ // 0x8067C4C0
    FUN_806DBAB4(r5, r6, r3, r4); // bl 0x806DBAB4
    r3 = r29 + 0x5fbc; // 0x8067C4C8
    /* li r4, -1 */ // 0x8067C4CC
    FUN_806DBAB4(r3, r4, r3, r4); // bl 0x806DBAB4
    /* lis r31, 0 */ // 0x8067C4D4
    r3 = r29 + 0x1624; // 0x8067C4D8
}