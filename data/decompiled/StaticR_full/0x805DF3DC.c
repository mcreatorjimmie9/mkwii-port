/* Function at 0x805DF3DC, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_805DF3DC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805DF3EC
    r31 = r31 + 0; // 0x805DF3F0
    *(0x18 + r1) = r30; // stw @ 0x805DF3F4
    r3 = r31 + 0; // 0x805DF3F8
    *(0x14 + r1) = r29; // stw @ 0x805DF3FC
    r0 = *(0xb0 + r3); // lwz @ 0x805DF400
    if (!=) goto 0x0x805df42c;
    r30 = r3 + 0x100; // 0x805DF40C
    /* li r29, 0 */ // 0x805DF410
    r3 = r30;
    FUN_805E0958(r3); // bl 0x805E0958
    r29 = r29 + 1; // 0x805DF41C
    r30 = r30 + 0xc; // 0x805DF420
    if (<) goto 0x0x805df414;
    r3 = r31 + 0; // 0x805DF42C
    /* li r29, 0 */ // 0x805DF430
    r30 = r3 + 0x178; // 0x805DF434
    r3 = r30;
    FUN_805E0E6C(r3, r3); // bl 0x805E0E6C
    r29 = r29 + 1; // 0x805DF440
    r30 = r30 + 0x10; // 0x805DF444
    if (<) goto 0x0x805df438;
    r3 = r31 + 0; // 0x805DF450
    r0 = *(0xa7 + r3); // lbz @ 0x805DF454
    if (==) goto 0x0x805df480;
    r30 = r3 + 0x1a8; // 0x805DF460
    /* li r29, 0 */ // 0x805DF464
    r3 = r30;
    FUN_805DEC24(r3); // bl 0x805DEC24
    r29 = r29 + 1; // 0x805DF470
    r30 = r30 + 0xc; // 0x805DF474
    if (<) goto 0x0x805df468;
    r3 = r31 + 0x240; // 0x805DF480
    r4 = r31 + 0x280; // 0x805DF484
    /* li r5, 1 */ // 0x805DF488
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}