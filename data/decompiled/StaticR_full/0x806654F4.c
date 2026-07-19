/* Function at 0x806654F4, size=180 bytes */
/* Stack frame: 16 bytes */

void FUN_806654F4(int r4, int r5)
{
    /* Stack frame: -16(r1) */
    r5 = *(0 + r4); // lha @ 0x806654F4
    if (>=) goto 0x0x8066550c;
    /* li r0, 0 */ // 0x80665504
    /* b 0x8066551c */ // 0x80665508
    /* li r0, 0xff */ // 0x80665510
    if (>) goto 0x0x8066551c;
    r0 = r5;
    r5 = *(2 + r4); // lha @ 0x8066551C
    *(8 + r1) = r0; // stb @ 0x80665520
    if (>=) goto 0x0x80665534;
    /* li r0, 0 */ // 0x8066552C
    /* b 0x80665544 */ // 0x80665530
    /* li r0, 0xff */ // 0x80665538
    if (>) goto 0x0x80665544;
    r0 = r5;
    r5 = *(4 + r4); // lha @ 0x80665544
    *(9 + r1) = r0; // stb @ 0x80665548
    if (>=) goto 0x0x8066555c;
    /* li r0, 0 */ // 0x80665554
    /* b 0x8066556c */ // 0x80665558
    /* li r0, 0xff */ // 0x80665560
    if (>) goto 0x0x8066556c;
    r0 = r5;
    r4 = *(6 + r4); // lha @ 0x8066556C
    *(0xa + r1) = r0; // stb @ 0x80665570
    if (>=) goto 0x0x80665584;
    /* li r0, 0 */ // 0x8066557C
    /* b 0x80665594 */ // 0x80665580
    /* li r0, 0xff */ // 0x80665588
    if (>) goto 0x0x80665594;
    r0 = r4;
    *(0xb + r1) = r0; // stb @ 0x80665594
    r0 = *(8 + r1); // lwz @ 0x80665598
    *(0 + r3) = r0; // stw @ 0x8066559C
    return;
}