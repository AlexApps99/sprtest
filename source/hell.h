// I picked register 27 because why not
// The exception handler will put magic in it if an exception occurs
#define mfspr(_rn)                                            \
    ({                                                        \
	register unsigned int _rval asm("r27");               \
	__asm__ __volatile__("mfspr %0," #_rn : "=r"(_rval)); \
	_rval;                                                \
    })

// GOD THIS IS HACKY
#define HELL(_n)                           \
    ({                                     \
	fprintf(f, "%04d:", _n);         \
	fflush(f);                         \
	fprintf(f, "0x%08X\n", mfspr(_n)); \
	fflush(f);                         \
    })

// Vimgolf flashbacks LOL
// Really takes a hit to the compile time
// :for i in range(0,1023) | put ='HELL('.i.');' | endfor
HELL(0);
HELL(1);
HELL(2);
HELL(3);
HELL(4);
HELL(5);
HELL(6);
HELL(7);
HELL(8);
HELL(9);
HELL(10);
HELL(11);
HELL(12);
HELL(13);
HELL(14);
HELL(15);
HELL(16);
HELL(17);
HELL(18);
HELL(19);
HELL(20);
HELL(21);
HELL(22);
HELL(23);
HELL(24);
HELL(25);
HELL(26);
HELL(27);
HELL(28);
HELL(29);
HELL(30);
HELL(31);
HELL(32);
HELL(33);
HELL(34);
HELL(35);
HELL(36);
HELL(37);
HELL(38);
HELL(39);
HELL(40);
HELL(41);
HELL(42);
HELL(43);
HELL(44);
HELL(45);
HELL(46);
HELL(47);
HELL(48);
HELL(49);
HELL(50);
HELL(51);
HELL(52);
HELL(53);
HELL(54);
HELL(55);
HELL(56);
HELL(57);
HELL(58);
HELL(59);
HELL(60);
HELL(61);
HELL(62);
HELL(63);
HELL(64);
HELL(65);
HELL(66);
HELL(67);
HELL(68);
HELL(69);
HELL(70);
HELL(71);
HELL(72);
HELL(73);
HELL(74);
HELL(75);
HELL(76);
HELL(77);
HELL(78);
HELL(79);
HELL(80);
HELL(81);
HELL(82);
HELL(83);
HELL(84);
HELL(85);
HELL(86);
HELL(87);
HELL(88);
HELL(89);
HELL(90);
HELL(91);
HELL(92);
HELL(93);
HELL(94);
HELL(95);
HELL(96);
HELL(97);
HELL(98);
HELL(99);
HELL(100);
HELL(101);
HELL(102);
HELL(103);
HELL(104);
HELL(105);
HELL(106);
HELL(107);
HELL(108);
HELL(109);
HELL(110);
HELL(111);
HELL(112);
HELL(113);
HELL(114);
HELL(115);
HELL(116);
HELL(117);
HELL(118);
HELL(119);
HELL(120);
HELL(121);
HELL(122);
HELL(123);
HELL(124);
HELL(125);
HELL(126);
HELL(127);
HELL(128);
HELL(129);
HELL(130);
HELL(131);
HELL(132);
HELL(133);
HELL(134);
HELL(135);
HELL(136);
HELL(137);
HELL(138);
HELL(139);
HELL(140);
HELL(141);
HELL(142);
HELL(143);
HELL(144);
HELL(145);
HELL(146);
HELL(147);
HELL(148);
HELL(149);
HELL(150);
HELL(151);
HELL(152);
HELL(153);
HELL(154);
HELL(155);
HELL(156);
HELL(157);
HELL(158);
HELL(159);
HELL(160);
HELL(161);
HELL(162);
HELL(163);
HELL(164);
HELL(165);
HELL(166);
HELL(167);
HELL(168);
HELL(169);
HELL(170);
HELL(171);
HELL(172);
HELL(173);
HELL(174);
HELL(175);
HELL(176);
HELL(177);
HELL(178);
HELL(179);
HELL(180);
HELL(181);
HELL(182);
HELL(183);
HELL(184);
HELL(185);
HELL(186);
HELL(187);
HELL(188);
HELL(189);
HELL(190);
HELL(191);
HELL(192);
HELL(193);
HELL(194);
HELL(195);
HELL(196);
HELL(197);
HELL(198);
HELL(199);
HELL(200);
HELL(201);
HELL(202);
HELL(203);
HELL(204);
HELL(205);
HELL(206);
HELL(207);
HELL(208);
HELL(209);
HELL(210);
HELL(211);
HELL(212);
HELL(213);
HELL(214);
HELL(215);
HELL(216);
HELL(217);
HELL(218);
HELL(219);
HELL(220);
HELL(221);
HELL(222);
HELL(223);
HELL(224);
HELL(225);
HELL(226);
HELL(227);
HELL(228);
HELL(229);
HELL(230);
HELL(231);
HELL(232);
HELL(233);
HELL(234);
HELL(235);
HELL(236);
HELL(237);
HELL(238);
HELL(239);
HELL(240);
HELL(241);
HELL(242);
HELL(243);
HELL(244);
HELL(245);
HELL(246);
HELL(247);
HELL(248);
HELL(249);
HELL(250);
HELL(251);
HELL(252);
HELL(253);
HELL(254);
HELL(255);
HELL(256);
HELL(257);
HELL(258);
HELL(259);
HELL(260);
HELL(261);
HELL(262);
HELL(263);
HELL(264);
HELL(265);
HELL(266);
HELL(267);
HELL(268);
HELL(269);
HELL(270);
HELL(271);
HELL(272);
HELL(273);
HELL(274);
HELL(275);
HELL(276);
HELL(277);
HELL(278);
HELL(279);
HELL(280);
HELL(281);
HELL(282);
HELL(283);
HELL(284);
HELL(285);
HELL(286);
HELL(287);
HELL(288);
HELL(289);
HELL(290);
HELL(291);
HELL(292);
HELL(293);
HELL(294);
HELL(295);
HELL(296);
HELL(297);
HELL(298);
HELL(299);
HELL(300);
HELL(301);
HELL(302);
HELL(303);
HELL(304);
HELL(305);
HELL(306);
HELL(307);
HELL(308);
HELL(309);
HELL(310);
HELL(311);
HELL(312);
HELL(313);
HELL(314);
HELL(315);
HELL(316);
HELL(317);
HELL(318);
HELL(319);
HELL(320);
HELL(321);
HELL(322);
HELL(323);
HELL(324);
HELL(325);
HELL(326);
HELL(327);
HELL(328);
HELL(329);
HELL(330);
HELL(331);
HELL(332);
HELL(333);
HELL(334);
HELL(335);
HELL(336);
HELL(337);
HELL(338);
HELL(339);
HELL(340);
HELL(341);
HELL(342);
HELL(343);
HELL(344);
HELL(345);
HELL(346);
HELL(347);
HELL(348);
HELL(349);
HELL(350);
HELL(351);
HELL(352);
HELL(353);
HELL(354);
HELL(355);
HELL(356);
HELL(357);
HELL(358);
HELL(359);
HELL(360);
HELL(361);
HELL(362);
HELL(363);
HELL(364);
HELL(365);
HELL(366);
HELL(367);
HELL(368);
HELL(369);
HELL(370);
HELL(371);
HELL(372);
HELL(373);
HELL(374);
HELL(375);
HELL(376);
HELL(377);
HELL(378);
HELL(379);
HELL(380);
HELL(381);
HELL(382);
HELL(383);
HELL(384);
HELL(385);
HELL(386);
HELL(387);
HELL(388);
HELL(389);
HELL(390);
HELL(391);
HELL(392);
HELL(393);
HELL(394);
HELL(395);
HELL(396);
HELL(397);
HELL(398);
HELL(399);
HELL(400);
HELL(401);
HELL(402);
HELL(403);
HELL(404);
HELL(405);
HELL(406);
HELL(407);
HELL(408);
HELL(409);
HELL(410);
HELL(411);
HELL(412);
HELL(413);
HELL(414);
HELL(415);
HELL(416);
HELL(417);
HELL(418);
HELL(419);
HELL(420);
HELL(421);
HELL(422);
HELL(423);
HELL(424);
HELL(425);
HELL(426);
HELL(427);
HELL(428);
HELL(429);
HELL(430);
HELL(431);
HELL(432);
HELL(433);
HELL(434);
HELL(435);
HELL(436);
HELL(437);
HELL(438);
HELL(439);
HELL(440);
HELL(441);
HELL(442);
HELL(443);
HELL(444);
HELL(445);
HELL(446);
HELL(447);
HELL(448);
HELL(449);
HELL(450);
HELL(451);
HELL(452);
HELL(453);
HELL(454);
HELL(455);
HELL(456);
HELL(457);
HELL(458);
HELL(459);
HELL(460);
HELL(461);
HELL(462);
HELL(463);
HELL(464);
HELL(465);
HELL(466);
HELL(467);
HELL(468);
HELL(469);
HELL(470);
HELL(471);
HELL(472);
HELL(473);
HELL(474);
HELL(475);
HELL(476);
HELL(477);
HELL(478);
HELL(479);
HELL(480);
HELL(481);
HELL(482);
HELL(483);
HELL(484);
HELL(485);
HELL(486);
HELL(487);
HELL(488);
HELL(489);
HELL(490);
HELL(491);
HELL(492);
HELL(493);
HELL(494);
HELL(495);
HELL(496);
HELL(497);
HELL(498);
HELL(499);
HELL(500);
HELL(501);
HELL(502);
HELL(503);
HELL(504);
HELL(505);
HELL(506);
HELL(507);
HELL(508);
HELL(509);
HELL(510);
HELL(511);
HELL(512);
HELL(513);
HELL(514);
HELL(515);
HELL(516);
HELL(517);
HELL(518);
HELL(519);
HELL(520);
HELL(521);
HELL(522);
HELL(523);
HELL(524);
HELL(525);
HELL(526);
HELL(527);
HELL(528);
HELL(529);
HELL(530);
HELL(531);
HELL(532);
HELL(533);
HELL(534);
HELL(535);
HELL(536);
HELL(537);
HELL(538);
HELL(539);
HELL(540);
HELL(541);
HELL(542);
HELL(543);
HELL(544);
HELL(545);
HELL(546);
HELL(547);
HELL(548);
HELL(549);
HELL(550);
HELL(551);
HELL(552);
HELL(553);
HELL(554);
HELL(555);
HELL(556);
HELL(557);
HELL(558);
HELL(559);
HELL(560);
HELL(561);
HELL(562);
HELL(563);
HELL(564);
HELL(565);
HELL(566);
HELL(567);
HELL(568);
HELL(569);
HELL(570);
HELL(571);
HELL(572);
HELL(573);
HELL(574);
HELL(575);
HELL(576);
HELL(577);
HELL(578);
HELL(579);
HELL(580);
HELL(581);
HELL(582);
HELL(583);
HELL(584);
HELL(585);
HELL(586);
HELL(587);
HELL(588);
HELL(589);
HELL(590);
HELL(591);
HELL(592);
HELL(593);
HELL(594);
HELL(595);
HELL(596);
HELL(597);
HELL(598);
HELL(599);
HELL(600);
HELL(601);
HELL(602);
HELL(603);
HELL(604);
HELL(605);
HELL(606);
HELL(607);
HELL(608);
HELL(609);
HELL(610);
HELL(611);
HELL(612);
HELL(613);
HELL(614);
HELL(615);
HELL(616);
HELL(617);
HELL(618);
HELL(619);
HELL(620);
HELL(621);
HELL(622);
HELL(623);
HELL(624);
HELL(625);
HELL(626);
HELL(627);
HELL(628);
HELL(629);
HELL(630);
HELL(631);
HELL(632);
HELL(633);
HELL(634);
HELL(635);
HELL(636);
HELL(637);
HELL(638);
HELL(639);
HELL(640);
HELL(641);
HELL(642);
HELL(643);
HELL(644);
HELL(645);
HELL(646);
HELL(647);
HELL(648);
HELL(649);
HELL(650);
HELL(651);
HELL(652);
HELL(653);
HELL(654);
HELL(655);
HELL(656);
HELL(657);
HELL(658);
HELL(659);
HELL(660);
HELL(661);
HELL(662);
HELL(663);
HELL(664);
HELL(665);
HELL(666);
HELL(667);
HELL(668);
HELL(669);
HELL(670);
HELL(671);
HELL(672);
HELL(673);
HELL(674);
HELL(675);
HELL(676);
HELL(677);
HELL(678);
HELL(679);
HELL(680);
HELL(681);
HELL(682);
HELL(683);
HELL(684);
HELL(685);
HELL(686);
HELL(687);
HELL(688);
HELL(689);
HELL(690);
HELL(691);
HELL(692);
HELL(693);
HELL(694);
HELL(695);
HELL(696);
HELL(697);
HELL(698);
HELL(699);
HELL(700);
HELL(701);
HELL(702);
HELL(703);
HELL(704);
HELL(705);
HELL(706);
HELL(707);
HELL(708);
HELL(709);
HELL(710);
HELL(711);
HELL(712);
HELL(713);
HELL(714);
HELL(715);
HELL(716);
HELL(717);
HELL(718);
HELL(719);
HELL(720);
HELL(721);
HELL(722);
HELL(723);
HELL(724);
HELL(725);
HELL(726);
HELL(727);
HELL(728);
HELL(729);
HELL(730);
HELL(731);
HELL(732);
HELL(733);
HELL(734);
HELL(735);
HELL(736);
HELL(737);
HELL(738);
HELL(739);
HELL(740);
HELL(741);
HELL(742);
HELL(743);
HELL(744);
HELL(745);
HELL(746);
HELL(747);
HELL(748);
HELL(749);
HELL(750);
HELL(751);
HELL(752);
HELL(753);
HELL(754);
HELL(755);
HELL(756);
HELL(757);
HELL(758);
HELL(759);
HELL(760);
HELL(761);
HELL(762);
HELL(763);
HELL(764);
HELL(765);
HELL(766);
HELL(767);
HELL(768);
HELL(769);
HELL(770);
HELL(771);
HELL(772);
HELL(773);
HELL(774);
HELL(775);
HELL(776);
HELL(777);
HELL(778);
HELL(779);
HELL(780);
HELL(781);
HELL(782);
HELL(783);
HELL(784);
HELL(785);
HELL(786);
HELL(787);
HELL(788);
HELL(789);
HELL(790);
HELL(791);
HELL(792);
HELL(793);
HELL(794);
HELL(795);
HELL(796);
HELL(797);
HELL(798);
HELL(799);
HELL(800);
HELL(801);
HELL(802);
HELL(803);
HELL(804);
HELL(805);
HELL(806);
HELL(807);
HELL(808);
HELL(809);
HELL(810);
HELL(811);
HELL(812);
HELL(813);
HELL(814);
HELL(815);
HELL(816);
HELL(817);
HELL(818);
HELL(819);
HELL(820);
HELL(821);
HELL(822);
HELL(823);
HELL(824);
HELL(825);
HELL(826);
HELL(827);
HELL(828);
HELL(829);
HELL(830);
HELL(831);
HELL(832);
HELL(833);
HELL(834);
HELL(835);
HELL(836);
HELL(837);
HELL(838);
HELL(839);
HELL(840);
HELL(841);
HELL(842);
HELL(843);
HELL(844);
HELL(845);
HELL(846);
HELL(847);
HELL(848);
HELL(849);
HELL(850);
HELL(851);
HELL(852);
HELL(853);
HELL(854);
HELL(855);
HELL(856);
HELL(857);
HELL(858);
HELL(859);
HELL(860);
HELL(861);
HELL(862);
HELL(863);
HELL(864);
HELL(865);
HELL(866);
HELL(867);
HELL(868);
HELL(869);
HELL(870);
HELL(871);
HELL(872);
HELL(873);
HELL(874);
HELL(875);
HELL(876);
HELL(877);
HELL(878);
HELL(879);
HELL(880);
HELL(881);
HELL(882);
HELL(883);
HELL(884);
HELL(885);
HELL(886);
HELL(887);
HELL(888);
HELL(889);
HELL(890);
HELL(891);
HELL(892);
HELL(893);
HELL(894);
HELL(895);
HELL(896);
HELL(897);
HELL(898);
HELL(899);
HELL(900);
HELL(901);
HELL(902);
HELL(903);
HELL(904);
HELL(905);
HELL(906);
HELL(907);
HELL(908);
HELL(909);
HELL(910);
HELL(911);
HELL(912);
HELL(913);
HELL(914);
HELL(915);
HELL(916);
HELL(917);
HELL(918);
HELL(919);
HELL(920);
HELL(921);
HELL(922);
HELL(923);
HELL(924);
HELL(925);
HELL(926);
HELL(927);
HELL(928);
HELL(929);
HELL(930);
HELL(931);
HELL(932);
HELL(933);
HELL(934);
HELL(935);
HELL(936);
HELL(937);
HELL(938);
HELL(939);
HELL(940);
HELL(941);
HELL(942);
HELL(943);
HELL(944);
HELL(945);
HELL(946);
HELL(947);
HELL(948);
HELL(949);
HELL(950);
HELL(951);
HELL(952);
HELL(953);
HELL(954);
HELL(955);
HELL(956);
HELL(957);
HELL(958);
HELL(959);
HELL(960);
HELL(961);
HELL(962);
HELL(963);
HELL(964);
HELL(965);
HELL(966);
HELL(967);
HELL(968);
HELL(969);
HELL(970);
HELL(971);
HELL(972);
HELL(973);
HELL(974);
HELL(975);
HELL(976);
HELL(977);
HELL(978);
HELL(979);
HELL(980);
HELL(981);
HELL(982);
HELL(983);
HELL(984);
HELL(985);
HELL(986);
HELL(987);
HELL(988);
HELL(989);
HELL(990);
HELL(991);
HELL(992);
HELL(993);
HELL(994);
HELL(995);
HELL(996);
HELL(997);
HELL(998);
HELL(999);
HELL(1000);
HELL(1001);
HELL(1002);
HELL(1003);
HELL(1004);
HELL(1005);
HELL(1006);
HELL(1007);
HELL(1008);
HELL(1009);
HELL(1010);
HELL(1011);
HELL(1012);
HELL(1013);
HELL(1014);
HELL(1015);
HELL(1016);
HELL(1017);
HELL(1018);
HELL(1019);
HELL(1020);
HELL(1021);
HELL(1022);
HELL(1023);

// We don't want anybody to actually use my silly macros...
#undef HELL
#undef mfspr
