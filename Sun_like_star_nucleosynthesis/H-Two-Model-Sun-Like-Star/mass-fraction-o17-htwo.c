{
   TCanvas *c1 = new TCanvas("c1","Muon",1,1,700,500);
   c1->SetLineColor(3);

   c1->SetGrid();

   const Int_t n = 300;
   Float_t y[n]  = {0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
0.0 ,
9.21801e-31 ,
2.53404e-30 ,
5.35385e-30 ,
1.02857e-29 ,
1.89116e-29 ,
3.39982e-29 ,
6.03848e-29 ,
1.06535e-28 ,
1.87252e-28 ,
3.28426e-28 ,
5.7534e-28 ,
1.00719e-27 ,
1.7625e-27 ,
3.08353e-27 ,
5.39399e-27 ,
9.43494e-27 ,
1.65025e-26 ,
2.88634e-26 ,
5.04819e-26 ,
8.82914e-26 ,
1.54417e-25 ,
2.70063e-25 ,
4.72309e-25 ,
8.25995e-25 ,
1.44449e-24 ,
2.52601e-24 ,
4.41705e-24 ,
7.72324e-24 ,
1.35029e-23 ,
2.36048e-23 ,
4.12576e-23 ,
7.20968e-23 ,
1.25952e-22 ,
2.19954e-22 ,
3.83925e-22 ,
6.697e-22 ,
1.16719e-21 ,
2.03197e-21 ,
3.53224e-21 ,
6.12831e-21 ,
1.06054e-20 ,
1.82927e-20 ,
3.14164e-20 ,
5.36559e-20 ,
9.0987e-20 ,
1.52899e-19 ,
2.54037e-19 ,
4.16205e-19 ,
6.70491e-19 ,
1.05902e-18 ,
1.63591e-18 ,
2.46738e-18 ,
3.63246e-18 ,
5.22666e-18 ,
7.37103e-18 ,
1.02264e-17 ,
1.40107e-17 ,
1.90181e-17 ,
2.56408e-17 ,
3.43994e-17 ,
4.59828e-17 ,
6.13017e-17 ,
8.15611e-17 ,
1.08354e-16 ,
1.43788e-16 ,
1.90649e-16 ,
2.52622e-16 ,
3.34583e-16 ,
4.42975e-16 ,
5.86324e-16 ,
7.75903e-16 ,
1.02662e-15 ,
1.3582e-15 ,
1.7967e-15 ,
2.37663e-15 ,
3.14358e-15 ,
4.15788e-15 ,
5.49928e-15 ,
7.27329e-15 ,
9.61942e-15 ,
1.27222e-14 ,
1.68256e-14 ,
2.22523e-14 ,
2.94292e-14 ,
3.89205e-14 ,
5.14729e-14 ,
6.80734e-14 ,
9.00276e-14 ,
1.1906e-13 ,
1.57453e-13 ,
2.08227e-13 ,
2.75376e-13 ,
3.64181e-13 ,
4.81625e-13 ,
6.36946e-13 ,
8.42356e-13 ,
1.11401e-12 ,
1.47328e-12 ,
1.94841e-12 ,
2.57676e-12 ,
3.40776e-12 ,
4.50676e-12 ,
5.96019e-12 ,
7.88235e-12 ,
1.04244e-11 ,
1.37863e-11 ,
1.82323e-11 ,
2.41123e-11 ,
3.18885e-11 ,
4.21725e-11 ,
5.57731e-11 ,
7.37599e-11 ,
9.75475e-11 ,
1.29007e-10 ,
1.70611e-10 ,
1.99033e-10 ,
2.31943e-10 ,
2.70082e-10 ,
3.14311e-10 ,
3.65626e-10 ,
4.25187e-10 ,
4.94336e-10 ,
5.74637e-10 ,
6.67904e-10 ,
7.76248e-10 ,
9.02123e-10 ,
1.04838e-09 ,
1.21835e-09 ,
1.41588e-09 ,
1.64548e-09 ,
1.91238e-09 ,
2.2227e-09 ,
2.58355e-09 ,
3.00322e-09 ,
3.4914e-09 ,
4.05942e-09 ,
4.7205e-09 ,
5.49012e-09 ,
6.38644e-09 ,
7.43073e-09 ,
8.64803e-09 ,
1.00678e-08 ,
1.17248e-08 ,
1.36603e-08 ,
1.59229e-08 ,
1.8571e-08 ,
2.1674e-08 ,
2.53155e-08 ,
2.95963e-08 ,
3.46393e-08 ,
4.05946e-08 ,
4.68822e-08 ,
5.43079e-08 ,
6.31182e-08 ,
7.3625e-08 ,
8.6229e-08 ,
1.01455e-07 ,
1.20003e-07 ,
1.42837e-07 ,
1.71316e-07 ,
2.07442e-07 ,
2.54303e-07 ,
3.16174e-07 ,
3.97975e-07 ,
5.06119e-07 ,
6.34579e-07 ,
7.63302e-07 ,
8.92379e-07 ,
1.02193e-06 ,
1.15211e-06 ,
1.28314e-06 ,
1.41495e-06 ,
1.54739e-06 ,
1.68101e-06 ,
1.8164e-06 ,
1.95432e-06 ,
2.0958e-06 ,
2.24228e-06 ,
2.3959e-06 ,
2.55993e-06 ,
2.73979e-06 ,
2.94501e-06 ,
3.1946e-06 ,
3.52128e-06 ,
3.9529e-06 ,
4.52299e-06 ,
5.27568e-06 ,
6.26891e-06 ,
7.57861e-06 ,
9.30402e-06 ,
1.15742e-05 ,
1.45564e-05 ,
1.84653e-05 ,
2.35744e-05 ,
3.02271e-05 ,
3.88469e-05 ,
4.99433e-05 ,
6.41067e-05 ,
8.19845e-05 ,
0.000104226 ,
0.000131378 ,
0.000163728 ,
0.000201078 ,
0.000242498 ,
0.000286128 ,
0.000329169 ,
0.000368225 ,
0.000400072 ,
0.000422702 ,
0.00043615 ,
0.000442467 ,
0.000444638 ,
0.000445133 ,
0.000445239 ,
0.000445245 
};




   Float_t x2[n]  = {3.1746031746e-37 ,
1.10238095238e-36 ,
2.14043849206e-36 ,
3.51326958829e-36 ,
5.32883871306e-36 ,
7.72992888056e-36 ,
1.09053706271e-35 ,
1.51048923369e-35 ,
2.0658759798e-35 ,
2.80037495154e-35 ,
3.77174984167e-35 ,
5.05639313386e-35 ,
6.75533388779e-35 ,
9.00218303485e-35 ,
1.19736410318e-34 ,
1.59033942329e-34 ,
2.11004928412e-34 ,
2.79736557508e-34 ,
3.70634136986e-34 ,
4.90846185847e-34 ,
6.49826620465e-34 ,
8.60078245248e-34 ,
1.13813601902e-33 ,
1.50586742484e-33 ,
1.99219220903e-33 ,
2.63535673613e-33 ,
3.48594182321e-33 ,
4.61084060088e-33 ,
6.09851923435e-33 ,
8.06597422711e-33 ,
1.0667933455e-32 ,
1.4109024534e-32 ,
1.86598674859e-32 ,
2.46783572897e-32 ,
3.26378100554e-32 ,
4.31641863379e-32 ,
5.70853189715e-32 ,
7.54960168795e-32 ,
9.98441648629e-32 ,
1.32044590571e-31 ,
1.7462965357e-31 ,
2.30948399386e-31 ,
3.05429940727e-31 ,
4.03931779151e-31 ,
5.34200460467e-31 ,
7.06480791507e-31 ,
9.34321529308e-31 ,
1.23564090505e-30 ,
1.63413577947e-30 ,
2.16114525089e-30 ,
2.85811527684e-30 ,
3.77985813616e-30 ,
4.99886306761e-30 ,
6.61099708945e-30 ,
8.74304433334e-30 ,
1.15626768134e-29 ,
1.52916407682e-29 ,
2.02231955985e-29 ,
2.67451768616e-29 ,
3.5370497082e-29 ,
4.67774830735e-29 ,
6.18632220472e-29 ,
8.181411184e-29 ,
1.08199163591e-28 ,
1.43093394531e-28 ,
1.8924101495e-28 ,
2.50271242955e-28 ,
3.3098371949e-28 ,
4.37725969708e-28 ,
5.78892595621e-28 ,
7.65585458392e-28 ,
1.01248676941e-27 ,
1.33901375322e-27 ,
1.77084568932e-27 ,
2.34194342481e-27 ,
3.09722017999e-27 ,
4.09607368872e-27 ,
5.41705745401e-27 ,
7.16405848361e-27 ,
9.47446734526e-27 ,
1.25299830648e-26 ,
1.65709026039e-26 ,
2.19150186943e-26 ,
2.89826122239e-26 ,
3.83295046668e-26 ,
5.06907699225e-26 ,
6.70385432232e-26 ,
8.86584734133e-26 ,
1.1725083109e-25 ,
1.55064224117e-25 ,
2.05072436395e-25 ,
2.71208297133e-25 ,
3.5867297296e-25 ,
4.7434500674e-25 ,
6.27321271414e-25 ,
8.29632381446e-25 ,
1.09718882446e-24 ,
1.45103222035e-24 ,
1.91899011142e-24 ,
2.53786442235e-24 ,
3.35632569856e-24 ,
4.43874073634e-24 ,
5.87023462382e-24 ,
7.76338529e-24 ,
1.0267077046e-23 ,
1.35782093934e-23 ,
1.79571819227e-23 ,
2.37483730928e-23 ,
3.14072234152e-23 ,
4.15360529667e-23 ,
5.49314300484e-23 ,
7.2646816239e-23 ,
9.60754144761e-23 ,
1.27059735645e-22 ,
1.6803650039e-22 ,
2.22228271766e-22 ,
2.9389688941e-22 ,
3.88678636245e-22 ,
5.14027496434e-22 ,
6.79801364034e-22 ,
8.99037303935e-22 ,
1.18897683445e-21 ,
1.57242186357e-21 ,
2.07952791457e-21 ,
2.75017566701e-21 ,
3.63710731962e-21 ,
4.8100744302e-21 ,
6.36132343394e-21 ,
8.41285024139e-21 ,
1.11259944442e-20 ,
1.47141276525e-20 ,
1.94594338204e-20 ,
2.57351012275e-20 ,
3.40346713734e-20 ,
4.50108528913e-20 ,
5.95268529488e-20 ,
7.87242630248e-20 ,
1.0411283785e-19 ,
1.37689228057e-19 ,
1.82094004105e-19 ,
2.40819320429e-19 ,
3.18483551268e-19 ,
4.21194496552e-19 ,
5.5702972169e-19 ,
7.36671806935e-19 ,
9.74248464671e-19 ,
1.28844359453e-18 ,
1.70396665376e-18 ,
2.2534958996e-18 ,
2.98024832722e-18 ,
3.94137841275e-18 ,
5.21247295086e-18 ,
6.89349547752e-18 ,
9.11664776902e-18 ,
1.20567666745e-17 ,
1.59450739271e-17 ,
2.10873602685e-17 ,
2.78880339551e-17 ,
3.68819249057e-17 ,
4.87763456877e-17 ,
6.4506717172e-17 ,
8.531013346e-17 ,
1.12822651501e-16 ,
1.4920795661e-16 ,
1.97327522617e-16 ,
2.6096564866e-16 ,
3.45127070353e-16 ,
4.56430550542e-16 ,
6.03629403092e-16 ,
7.9829988559e-16 ,
1.05575159869e-15 ,
1.39623148927e-15 ,
1.84651614456e-15 ,
2.44201760118e-15 ,
3.22956827756e-15 ,
4.27110404708e-15 ,
5.64853510226e-15 ,
7.47018767274e-15 ,
9.87932319719e-15 ,
1.30654049283e-14 ,
1.72789980177e-14 ,
2.28514748784e-14 ,
3.02210755266e-14 ,
3.9967372384e-14 ,
5.28568499778e-14 ,
6.99031840956e-14 ,
9.24469609665e-14 ,
1.22261105878e-13 ,
1.61690312524e-13 ,
2.13835438313e-13 ,
2.82797367169e-13 ,
3.73999518081e-13 ,
4.94614362662e-13 ,
6.5412749462e-13 ,
8.65083611635e-13 ,
1.14407307639e-12 ,
1.51303664352e-12 ,
2.00099096106e-12 ,
2.646310546e-12 ,
3.49974569708e-12 ,
4.62841368439e-12 ,
6.12107709761e-12 ,
8.09512446159e-12 ,
1.07058021005e-11 ,
1.41584232778e-11 ,
1.8724514785e-11 ,
2.47631708031e-11 ,
3.27492933871e-11 ,
4.33109405044e-11 ,
5.72787188171e-11 ,
7.57511056356e-11 ,
1.00180837203e-10 ,
1.32489157201e-10 ,
1.75216910399e-10 ,
2.31724364002e-10 ,
3.06455471393e-10 ,
4.05287360917e-10 ,
5.35992534813e-10 ,
7.0885012729e-10 ,
9.3745429334e-10 ,
1.23978330294e-09 ,
1.63961341814e-09 ,
2.16838874549e-09 ,
2.86769411591e-09 ,
3.7925254683e-09 ,
5.01561493182e-09 ,
6.63315074733e-09 ,
8.77234186335e-09 ,
1.16014221143e-08 ,
1.53428807461e-08 ,
2.02909597868e-08 ,
2.6834794318e-08 ,
3.54890154855e-08 ,
4.69342229796e-08 ,
6.20705098906e-08 ,
8.20882493303e-08 ,
1.08561709739e-07 ,
1.4357286113e-07 ,
1.89875108845e-07 ,
2.51109831447e-07 ,
3.32092752089e-07 ,
4.39192664637e-07 ,
5.80832298983e-07 ,
7.68150715405e-07 ,
1.01587932112e-06 ,
1.34350040219e-06 ,
1.77677928189e-06 ,
2.3497906003e-06 ,
3.1075980689e-06 ,
4.10979844612e-06 ,
5.43520844499e-06 ,
7.1880631685e-06 ,
9.50621354034e-06 ,
1.25719674071e-05 ,
1.66264268959e-05 ,
2.19884495698e-05 ,
2.90797245561e-05 ,
3.84579357254e-05 ,
5.08606199968e-05 ,
6.72631699458e-05 ,
8.89555422534e-05 ,
0.00011764370463 ,
0.000155583799373 ,
0.000205759574671 ,
0.000272117037503 ,
0.000359874782097 ,
0.000475934399323 ,
0.000629423243105 ,
0.000832412239007 ,
0.00110086518609 ,
0.0014558942086 ,
0.00192542009087 ,
0.00254636807018 ,
0.00336757177281 ,
0.00445361366954 ,
0.00588990407797 ,
0.00778939814312 ,
0.0103014790443 ,
0.013623706036 ,
0.0180173512327 ,
0.0238279470052 ,
0.0315124599144 ,
0.0416752282368 ,
0.0551154893432 ,
0.0728902346563 ,
0.096397335333 ,
0.127485475978 ,
0.168599541981 ,
0.22297289427 ,
0.294881652671 ,
0.389980985658 ,
0.515749853533 ,
0.682079181297 ,
0.902049717265 ,
1.19296075108 ,
1.57769059331 ,
2.08649580965 ,
2.75939070826 ,
3.64929421168 ,
4.57142857143 };


   TGraph *gr2 = new TGraph(n,x2,y);
   leg2 = new TLegend(1,1,1,1);


   gr2->SetTitle("Mass fraction of ^{17}O, VS time");
   gr2->SetMarkerColor(2);
   gr2->GetXaxis()->SetTitle("Time - Gy, 3.16e+16 s");
   gr2->GetYaxis()->SetTitle("Mass Fraction");
   gr2->GetXaxis()->CenterTitle();
   gr2->GetYaxis()->CenterTitle();
   gr2->SetMarkerColor(4);
   gr2->SetMarkerStyle(4);
   gr2->SetLineColor(4);
   gr2->GetXaxis()->SetRangeUser(0, 4.57);

   gr2->SetLineWidth(4);
   gr2->Draw("AC*");
leg2->AddEntry(gr2,"^{17}O","l");
leg2->SetHeader("Mass Fraction, H-two Model");
leg2->Draw();

// oops we forgot the blue line... add it after
// and add a header (or "title") for the legend



   c1->Update();
}
