tab_url_list = [
  'https://htmlpreview.github.io/?https://raw.githubusercontent.com/JaceKim-TheAL/D2501_Notes/master/Q-Net/html/terms/keyword.html', 
  'https://htmlpreview.github.io/?https://raw.githubusercontent.com/JaceKim-TheAL/D2501_Notes/master/Q-Net/html/terms/keyword1.html', 
  'https://htmlpreview.github.io/?https://raw.githubusercontent.com/JaceKim-TheAL/D2501_Notes/master/Q-Net/html/terms/keyword2.html', 
  'https://htmlpreview.github.io/?https://raw.githubusercontent.com/JaceKim-TheAL/D2501_Notes/master/Q-Net/html/terms/keyword3.html', 
  'https://htmlpreview.github.io/?https://raw.githubusercontent.com/JaceKim-TheAL/D2501_Notes/master/Q-Net/html/terms/keyword4.html', 
  'https://htmlpreview.github.io/?https://raw.githubusercontent.com/JaceKim-TheAL/D2501_Notes/master/Q-Net/html/terms/keyword5.html' 
];

tab_file_list = [
  './keyword.html',
  './keyword1.html',
  './keyword2.html',
  './keyword3.html',
  './keyword4.html',
  './keyword5.html'
];


  function navigateToTab(index) {
    window.location.href = tab_url_list[index]; 
    // window.location.href = tab_file_list[index];
  }

  function showChapter(index) {
    const contents = document.querySelectorAll('.tab-content');
    const buttons = document.querySelectorAll('.tab-header button');

    contents.forEach((c, i) => {
      c.classList.toggle('active', i === index);
    });

    buttons.forEach((b, i) => {
      b.classList.toggle('active', i === index);
    });
  }

  
  