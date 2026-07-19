/* Function at 0x806C3158, size=380 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 15 function(s) */

int FUN_806C3158(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806C3160
    /* li r5, 0 */ // 0x806C3164
    *(0x14 + r1) = r0; // stw @ 0x806C3168
    *(0xc + r1) = r31; // stw @ 0x806C316C
    *(8 + r1) = r30; // stw @ 0x806C3170
    r30 = r3;
    r12 = *(0x6c + r3); // lwz @ 0x806C3178
    r12 = *(0x10 + r12); // lwz @ 0x806C317C
    /* mtctr r12 */ // 0x806C3180
    r3 = r3 + 0x6c; // 0x806C3184
    /* bctrl  */ // 0x806C3188
    r3 = r30;
    r4 = r30 + 0x6c; // 0x806C3190
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30 + 0x6c; // 0x806C3198
    /* li r4, 1 */ // 0x806C319C
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r30 + 0x6c; // 0x806C31A4
    r5 = r30 + 0x58; // 0x806C31A8
    /* li r4, 1 */ // 0x806C31AC
    /* li r6, 0 */ // 0x806C31B0
    /* li r7, 0 */ // 0x806C31B4
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r30;
    /* li r4, 4 */ // 0x806C31C0
    FUN_80671C1C(r6, r7, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x290; // 0x806C31CC
    /* li r4, 0 */ // 0x806C31D0
    /* li r6, 0 */ // 0x806C31D4
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x290; // 0x806C31DC
    /* li r4, 0 */ // 0x806C31E0
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r30;
    r5 = r30 + 0x404; // 0x806C31EC
    /* li r4, 1 */ // 0x806C31F0
    /* li r6, 0 */ // 0x806C31F4
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806C31FC
    r3 = r30 + 0x404; // 0x806C3200
    r4 = r31 + 0; // 0x806C3204
    r5 = r4 + 0xf; // 0x806C3208
    r6 = r4 + 0x1d; // 0x806C320C
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30;
    r5 = r30 + 0x578; // 0x806C3218
    /* li r4, 2 */ // 0x806C321C
    /* li r6, 0 */ // 0x806C3220
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r31 = r31 + 0; // 0x806C3228
    r3 = r30 + 0x578; // 0x806C322C
    r4 = r31 + 0x2b; // 0x806C3230
    /* li r7, 1 */ // 0x806C3234
    r5 = r31 + 0x32; // 0x806C3238
    r6 = r31 + 0x4f; // 0x806C323C
    /* li r8, 0 */ // 0x806C3240
    /* li r9, 0 */ // 0x806C3244
    FUN_80649914(r7, r5, r6, r8, r9); // bl 0x80649914
    /* li r0, 2 */ // 0x806C324C
    *(0x7b8 + r30) = r0; // stw @ 0x806C3250
    r3 = r30 + 0x578; // 0x806C3254
    r4 = r30 + 0x44; // 0x806C3258
    /* li r5, 0 */ // 0x806C325C
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30;
    r5 = r30 + 0x7cc; // 0x806C3268
    /* li r4, 3 */ // 0x806C326C
    /* li r6, 0 */ // 0x806C3270
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x7cc; // 0x806C3278
    r4 = r31 + 0x54; // 0x806C327C
    r5 = r31 + 0x5b; // 0x806C3280
    r6 = r31 + 0x60; // 0x806C3284
    /* li r7, 1 */ // 0x806C3288
    /* li r8, 0 */ // 0x806C328C
    /* li r9, 1 */ // 0x806C3290
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 3 */ // 0x806C3298
    *(0xa0c + r30) = r0; // stw @ 0x806C329C
    r3 = r30 + 0x7cc; // 0x806C32A0
    r4 = r30 + 0x44; // 0x806C32A4
    /* li r5, 0 */ // 0x806C32A8
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x578; // 0x806C32B0
    /* li r4, 0 */ // 0x806C32B4
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0x14 + r1); // lwz @ 0x806C32BC
    r31 = *(0xc + r1); // lwz @ 0x806C32C0
    r30 = *(8 + r1); // lwz @ 0x806C32C4
    return;
}