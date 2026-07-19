/* Function at 0x806BE1E0, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806BE1E0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806BE1F0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806BE1F8
    r30 = r3;
    if (==) goto 0x0x806be26c;
    /* li r4, -1 */ // 0x806BE204
    r3 = r3 + 0x2a44; // 0x806BE208
    FUN_8066D714(r4, r3); // bl 0x8066D714
    r3 = r30 + 0x28c8; // 0x806BE210
    /* li r4, -1 */ // 0x806BE214
    FUN_8066D42C(r4, r3, r3, r4); // bl 0x8066D42C
    /* lis r4, 0 */ // 0x806BE21C
    r3 = r30 + 0x1c8; // 0x806BE220
    r4 = r4 + 0; // 0x806BE224
    /* li r5, 0x1a0 */ // 0x806BE228
    /* li r6, 0x18 */ // 0x806BE22C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* addic. r3, r30, 0x54 */ // 0x806BE234
    if (==) goto 0x0x806be244;
    /* li r4, 0 */ // 0x806BE23C
    FUN_806A0540(r6, r4); // bl 0x806A0540
    r3 = r30 + 0x44; // 0x806BE244
    /* li r4, -1 */ // 0x806BE248
    FUN_80668158(r4, r3, r4); // bl 0x80668158
}