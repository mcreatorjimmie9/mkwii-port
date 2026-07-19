/* Function at 0x806AA544, size=308 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806AA544(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x806AA54C
    /* li r4, -1 */ // 0x806AA550
    *(0x24 + r1) = r0; // stw @ 0x806AA554
    *(0x1c + r1) = r31; // stw @ 0x806AA558
    *(0x18 + r1) = r30; // stw @ 0x806AA55C
    r30 = r5;
    r3 = *(0 + r3); // lwz @ 0x806AA564
    r3 = *(0 + r3); // lwz @ 0x806AA568
    r0 = *(0 + r3); // lwz @ 0x806AA56C
    if (==) goto 0x0x806aa624;
    if (>=) goto 0x0x806aa5bc;
    if (==) goto 0x0x806aa610;
    if (>=) goto 0x0x806aa5b0;
    if (>=) goto 0x0x806aa5a4;
    if (>=) goto 0x0x806aa624;
    if (>=) goto 0x0x806aa5f8;
    /* b 0x806aa624 */ // 0x806AA5A0
    if (>=) goto 0x0x806aa624;
    /* b 0x806aa5f8 */ // 0x806AA5AC
    if (==) goto 0x0x806aa624;
    /* b 0x806aa618 */ // 0x806AA5B8
    if (==) goto 0x0x806aa610;
    if (>=) goto 0x0x806aa5e0;
    if (==) goto 0x0x806aa618;
    if (>=) goto 0x0x806aa624;
    if (>=) goto 0x0x806aa624;
    /* b 0x806aa600 */ // 0x806AA5DC
    if (==) goto 0x0x806aa608;
    if (>=) goto 0x0x806aa624;
    if (>=) goto 0x0x806aa624;
    /* b 0x806aa620 */ // 0x806AA5F4
    /* li r4, 0x41 */ // 0x806AA5F8
    /* b 0x806aa624 */ // 0x806AA5FC
    /* li r4, 0x7a */ // 0x806AA600
    /* b 0x806aa624 */ // 0x806AA604
    /* li r4, 0x9e */ // 0x806AA608
    /* b 0x806aa624 */ // 0x806AA60C
    /* li r4, -1 */ // 0x806AA610
    /* b 0x806aa624 */ // 0x806AA614
    /* li r4, 0x7a */ // 0x806AA618
    /* b 0x806aa624 */ // 0x806AA61C
    /* li r4, 0x9e */ // 0x806AA620
    if (==) goto 0x0x806aa660;
    /* lis r31, 0 */ // 0x806AA62C
    /* li r5, 0 */ // 0x806AA630
    r3 = *(0 + r31); // lwz @ 0x806AA634
    FUN_80698C44(r5); // bl 0x80698C44
    r31 = *(0 + r31); // lwz @ 0x806AA63C
    r3 = r30;
    FUN_8064A384(r5, r3); // bl 0x8064A384
    /* fctiwz f0, f1 */ // 0x806AA648
    r3 = r31;
    /* li r5, 0xff */ // 0x806AA650
    /* stfd f0, 8(r1) */ // 0x806AA654
    r4 = *(0xc + r1); // lwz @ 0x806AA658
    FUN_80698CD0(r3, r5); // bl 0x80698CD0
    r0 = *(0x24 + r1); // lwz @ 0x806AA660
    r31 = *(0x1c + r1); // lwz @ 0x806AA664
    r30 = *(0x18 + r1); // lwz @ 0x806AA668
    return;
}