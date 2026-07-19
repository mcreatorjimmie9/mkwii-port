/* Function at 0x806C8150, size=340 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_806C8150(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806C8158
    *(0xd8 + r1) = r30; // stw @ 0x806C8164
    *(0xd4 + r1) = r29; // stw @ 0x806C8168
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806C8170
    r3 = *(0 + r3); // lwz @ 0x806C8174
    r30 = *(0x150 + r3); // lwz @ 0x806C8178
    if (!=) goto 0x0x806c818c;
    /* li r30, 0 */ // 0x806C8184
    /* b 0x806c81e0 */ // 0x806C8188
    /* lis r31, 0 */ // 0x806C818C
    r31 = r31 + 0; // 0x806C8190
    if (==) goto 0x0x806c81dc;
    r12 = *(0 + r30); // lwz @ 0x806C8198
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806C81A0
    /* mtctr r12 */ // 0x806C81A4
    /* bctrl  */ // 0x806C81A8
    /* b 0x806c81c4 */ // 0x806C81AC
    if (!=) goto 0x0x806c81c0;
    /* li r0, 1 */ // 0x806C81B8
    /* b 0x806c81d0 */ // 0x806C81BC
    r3 = *(0 + r3); // lwz @ 0x806C81C0
    if (!=) goto 0x0x806c81b0;
    /* li r0, 0 */ // 0x806C81CC
    if (==) goto 0x0x806c81dc;
    /* b 0x806c81e0 */ // 0x806C81D8
    /* li r30, 0 */ // 0x806C81DC
    r12 = *(0 + r30); // lwz @ 0x806C81E0
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806C81E8
    /* mtctr r12 */ // 0x806C81EC
    /* bctrl  */ // 0x806C81F0
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    r3 = r29 + 0x634; // 0x806C81FC
    /* li r4, 0 */ // 0x806C8200
    FUN_8066E0EC(r3, r3, r4); // bl 0x8066E0EC
    /* lis r4, 0 */ // 0x806C8208
    *(0x50 + r1) = r3; // stw @ 0x806C820C
    r3 = *(0 + r4); // lwz @ 0x806C8210
    r3 = *(0 + r3); // lwz @ 0x806C8214
    r0 = *(0 + r3); // lwz @ 0x806C8218
    if (<) goto 0x0x806c822c;
    if (<=) goto 0x0x806c8258;
    if (!=) goto 0x0x806c8278;
    r3 = r30;
    /* li r4, 0x836 */ // 0x806C8238
    /* li r5, 0 */ // 0x806C823C
    FUN_8064D8B4(r3, r4, r5); // bl 0x8064D8B4
    r3 = r30;
    /* li r4, 0x83f */ // 0x806C824C
    FUN_8064D8BC(r5, r3, r5, r4); // bl 0x8064D8BC
    /* b 0x806c8278 */ // 0x806C8254
    r3 = r30;
    /* li r4, 0x898 */ // 0x806C825C
    /* li r5, 0 */ // 0x806C8260
    FUN_8064D8B4(r3, r4, r5); // bl 0x8064D8B4
    r3 = r30;
    /* li r4, 0x840 */ // 0x806C8270
    FUN_8064D8BC(r5, r3, r5, r4); // bl 0x8064D8BC
    r0 = r29 + 0x58; // 0x806C8278
    *(0x820 + r30) = r0; // stw @ 0x806C827C
    r0 = r29 + 0x6c; // 0x806C8280
    *(0x824 + r30) = r0; // stw @ 0x806C8284
    r31 = *(0xdc + r1); // lwz @ 0x806C8288
    r30 = *(0xd8 + r1); // lwz @ 0x806C828C
    r29 = *(0xd4 + r1); // lwz @ 0x806C8290
    r0 = *(0xe4 + r1); // lwz @ 0x806C8294
    return;
}