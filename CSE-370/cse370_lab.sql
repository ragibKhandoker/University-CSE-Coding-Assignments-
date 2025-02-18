-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Feb 16, 2025 at 11:24 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `cse370_lab`
--

-- --------------------------------------------------------

--
-- Table structure for table `lab_grades`
--

CREATE TABLE `lab_grades` (
  `stu_id` char(4) DEFAULT NULL,
  `name` varchar(30) DEFAULT NULL,
  `major` char(3) DEFAULT NULL,
  `section` char(1) DEFAULT NULL,
  `days_present` int(11) DEFAULT NULL,
  `project_marks` double DEFAULT NULL,
  `cgpa` decimal(3,2) DEFAULT NULL,
  `sub_date` date DEFAULT NULL,
  `projects_title` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `lab_grades`
--

INSERT INTO `lab_grades` (`stu_id`, `name`, `major`, `section`, `days_present`, `project_marks`, `cgpa`, `sub_date`, `projects_title`) VALUES
('s001', 'Abir', 'CS', '1', 11, 18.5, 3.91, '2018-09-15', NULL),
('s002', 'Nafis', 'CSE', '1', 12, 20, 3.86, '2018-08-15', NULL),
('s003', 'Tasneem', 'CS', '1', 8, 18, 3.57, '2018-09-18', NULL),
('s005', 'Arafat', 'CSE', '2', 11, 20, 4.00, '2018-09-13', NULL),
('s006', 'Tasneem', 'CSE', '1', 12, 17.5, 3.70, '2018-08-15', NULL),
('s007', 'Muhtadi', 'ECE', '1', 10, 19, 3.67, '2018-09-16', NULL);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
