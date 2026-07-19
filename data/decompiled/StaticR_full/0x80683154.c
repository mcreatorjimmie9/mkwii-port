/* Function at 0x80683154, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80683154(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8068315C
    *(0x18 + r1) = r30; // stw @ 0x80683168
    *(0x14 + r1) = r29; // stw @ 0x8068316C
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x80683174
    r3 = *(0 + r3); // lwz @ 0x80683178
    r30 = *(0x144 + r3); // lwz @ 0x8068317C
    if (!=) goto 0x0x80683190;
    /* li r30, 0 */ // 0x80683188
    /* b 0x806831e4 */ // 0x8068318C
    /* lis r31, 0 */ // 0x80683190
    r31 = r31 + 0; // 0x80683194
    if (==) goto 0x0x806831e0;
    r12 = *(0 + r30); // lwz @ 0x8068319C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806831A4
    /* mtctr r12 */ // 0x806831A8
    /* bctrl  */ // 0x806831AC
    /* b 0x806831c8 */ // 0x806831B0
    if (!=) goto 0x0x806831c4;
    /* li r0, 1 */ // 0x806831BC
    /* b 0x806831d4 */ // 0x806831C0
    r3 = *(0 + r3); // lwz @ 0x806831C4
    if (!=) goto 0x0x806831b4;
    /* li r0, 0 */ // 0x806831D0
    if (==) goto 0x0x806831e0;
    /* b 0x806831e4 */ // 0x806831DC
    /* li r30, 0 */ // 0x806831E0
    r12 = *(0 + r30); // lwz @ 0x806831E4
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806831EC
    /* mtctr r12 */ // 0x806831F0
    /* bctrl  */ // 0x806831F4
    r12 = *(0 + r30); // lwz @ 0x806831F8
    r3 = r30;
    /* li r4, 0x811 */ // 0x80683200
    /* li r5, 0 */ // 0x80683204
    r12 = *(0x68 + r12); // lwz @ 0x80683208
    /* mtctr r12 */ // 0x8068320C
    /* bctrl  */ // 0x80683210
    r12 = *(0 + r29); // lwz @ 0x80683214
    r3 = r29;
    /* li r4, 0x4f */ // 0x8068321C
    /* li r5, 0 */ // 0x80683220
    r12 = *(0x24 + r12); // lwz @ 0x80683224
    /* mtctr r12 */ // 0x80683228
    /* bctrl  */ // 0x8068322C
    /* lis r3, 0 */ // 0x80683230
    r3 = *(0 + r3); // lwz @ 0x80683234
    FUN_806FDEC4(r3); // bl 0x806FDEC4
    /* li r0, 1 */ // 0x8068323C
    *(0x68 + r29) = r0; // stw @ 0x80683240
    r31 = *(0x1c + r1); // lwz @ 0x80683244
    r30 = *(0x18 + r1); // lwz @ 0x80683248
    r29 = *(0x14 + r1); // lwz @ 0x8068324C
    r0 = *(0x24 + r1); // lwz @ 0x80683250
    return;
}