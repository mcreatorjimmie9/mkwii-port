/* Function at 0x808F6134, size=356 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 4 function(s) */

int FUN_808F6134(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x808F6140
    r27 = r3;
    r28 = r4;
    r0 = *(0x6fa + r3); // lbz @ 0x808F614C
    if (==) goto 0x0x808f6194;
    r0 = *(0x6fb + r3); // lbz @ 0x808F6158
    if (!=) goto 0x0x808f6194;
    r4 = *(0x9c + r3); // lhz @ 0x808F6164
    if (==) goto 0x0x808f6180;
    if (==) goto 0x0x808f6180;
    if (!=) goto 0x0x808f6188;
    /* li r0, 1 */ // 0x808F6180
    /* b 0x808f618c */ // 0x808F6184
    /* li r0, 0 */ // 0x808F6188
    if (==) goto 0x0x808f619c;
    /* li r3, -1 */ // 0x808F6194
    /* b 0x808f6284 */ // 0x808F6198
    /* lis r5, 0 */ // 0x808F619C
    /* lis r3, 0 */ // 0x808F61A0
    r0 = r4 rlwinm 2; // rlwinm
    r3 = *(0 + r3); // lwz @ 0x808F61A8
    r5 = r5 + 0; // 0x808F61AC
    /* lwzx r6, r5, r0 */ // 0x808F61B0
    r5 = r28;
    r30 = r6 + 4; // 0x808F61B8
    FUN_808F8538(r5, r5); // bl 0x808F8538
    /* slwi r0, r28, 2 */ // 0x808F61C0
    r29 = r3;
    r31 = r27 + r0; // 0x808F61C8
    r4 = *(0x140 + r31); // lwz @ 0x808F61CC
    FUN_808F929C(); // bl 0x808F929C
    r0 = *(0x6fd + r27); // lbz @ 0x808F61D4
    if (==) goto 0x0x808f6200;
    if (!=) goto 0x0x808f6200;
    r3 = r29;
    FUN_808F8EE0(r3); // bl 0x808F8EE0
    *(0x140 + r31) = r3; // stw @ 0x808F61F0
    r4 = r3;
    r3 = r29;
    FUN_808F929C(r3, r4, r3); // bl 0x808F929C
    /* lis r4, 0 */ // 0x808F6200
    /* slwi r0, r28, 2 */ // 0x808F6204
    r4 = *(0 + r4); // lwz @ 0x808F6208
    /* subf r5, r28, r0 */ // 0x808F620C
    r0 = r30 + r3; // 0x808F6210
    r6 = *(0x140 + r31); // lwz @ 0x808F6214
    r3 = *(0xb70 + r4); // lwz @ 0x808F6218
    r30 = r5 + r0; // 0x808F621C
    if (<) goto 0x0x808f6230;
    if (<=) goto 0x0x808f6280;
    /* lis r3, 0 */ // 0x808F6230
    /* lis r4, 0 */ // 0x808F6234
    r0 = *(0 + r3); // lwz @ 0x808F6238
    r4 = r4 + 0; // 0x808F623C
    /* li r3, 0 */ // 0x808F6240
    /* mtctr r0 */ // 0x808F6244
    if (<=) goto 0x0x808f6280;
    r0 = *(0 + r4); // lwz @ 0x808F6250
    if (!=) goto 0x0x808f6274;
    /* mulli r0, r3, 0x1c */ // 0x808F625C
    /* lis r3, 0 */ // 0x808F6260
    r3 = r3 + 0; // 0x808F6264
    r3 = r3 + r0; // 0x808F6268
    r30 = *(8 + r3); // lwz @ 0x808F626C
    /* b 0x808f6280 */ // 0x808F6270
    r4 = r4 + 0x1c; // 0x808F6274
    r3 = r3 + 1; // 0x808F6278
    if (counter-- != 0) goto 0x0x808f6250;
    r3 = r30;
    r0 = *(0x24 + r1); // lwz @ 0x808F6288
    return;
}