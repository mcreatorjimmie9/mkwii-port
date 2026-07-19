/* Function at 0x806BE14C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806BE14C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806BE15C
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806BE168
    r3 = r30 + 0x44; // 0x806BE16C
    r4 = r4 + 0; // 0x806BE170
    *(0 + r30) = r4; // stw @ 0x806BE174
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r31 = r30 + 0x54; // 0x806BE17C
    r3 = r31;
    FUN_806A0418(r4, r3); // bl 0x806A0418
    /* lis r3, 0 */ // 0x806BE188
    /* lis r4, 0 */ // 0x806BE18C
    r3 = r3 + 0; // 0x806BE190
    /* lis r5, 0 */ // 0x806BE194
    *(0 + r31) = r3; // stw @ 0x806BE198
    r3 = r30 + 0x1c8; // 0x806BE19C
    r4 = r4 + 0; // 0x806BE1A0
    r5 = r5 + 0; // 0x806BE1A4
    /* li r6, 0x1a0 */ // 0x806BE1A8
    /* li r7, 0x18 */ // 0x806BE1AC
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}