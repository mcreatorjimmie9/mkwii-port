/* Function at 0x806482DC, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806482DC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x806482E4
    /* lis r4, 0 */ // 0x806482E8
    /* li r0, 0 */ // 0x806482F0
    *(0x1c + r1) = r31; // stw @ 0x806482F4
    *(0x18 + r1) = r30; // stw @ 0x806482F8
    r30 = r5 + 0; // 0x806482FC
    *(0x14 + r1) = r29; // stw @ 0x80648300
    *(0x10 + r1) = r28; // stw @ 0x80648304
    r28 = r3;
    r3 = r30 + 0xbc; // 0x8064830C
    *(8 + r1) = r0; // stw @ 0x80648310
    r4 = *(0 + r4); // lwz @ 0x80648314
    /* crclr cr1eq */ // 0x80648318
    FUN_8063803C(r3); // bl 0x8063803C
    r5 = r3;
    /* li r4, 7 */ // 0x80648328
    FUN_805EB338(r5, r3, r4); // bl 0x805EB338
    /* li r29, 0 */ // 0x80648330
    /* lis r31, 0 */ // 0x80648334
    r4 = *(0 + r31); // lwz @ 0x80648338
    r3 = r30 + 0xc5; // 0x8064833C
    r5 = r29 + 1; // 0x80648340
    /* crclr cr1eq */ // 0x80648344
    FUN_8063803C(r3, r5); // bl 0x8063803C
    r4 = r3;
    FUN_805E3430(r5, r4, r3); // bl 0x805E3430
}